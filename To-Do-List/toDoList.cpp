#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct todolist{
    int id;
    string task;
};

int ID;

void banner();
void addTask();
void showTask();
int searchTask();
void deleteTask();
void updateTask();

void exitProgram(){
    cout << "Encerrando lista de tarefas...";
    exit(0);
}

void showProgram(){
 
    while(true)
    {
        banner();
        cout << "\n\t1. Adicionar Tarefa";
        cout << "\n\t2. Mostrar Tarefa";
        cout << "\n\t3. Buscar Tarefa";
        cout << "\n\t4. Deletar Tarefa";
        cout << "\n\t5. Sair";

        int choice;
        cout <<"\n\t Insira a escolha: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addTask();
            break;
        case 2:
            showTask();
            break;
        case 3:
            searchTask();
            break;
        case 4:
           deleteTask();
            break;
        case 5:
            exitProgram();
            break;

        default:
            break;
        }
    }
}
int main (){
    system("cls");
    showProgram();
    return 0;
}

void banner(){
    cout << "___________________________________" << endl;
    cout << "\t  Minha lista de tarefas" << endl;
    cout << "___________________________________" << endl;
}


void addTask(){
    system("cls");
    banner();
    todolist todo;
    cout << "Insira a nova tarefa: " << endl;
    cin.get();
    getline(cin, todo.task);
    char save;
    cout << "Salvar tarefa?" << endl;
    cout << "(1) SIM" << endl;
    cout << "(2) NAO" << endl;
    cin >> save;
    if(save == '1'){
        ID++;
        ofstream fout;
        fout.open("toDoList.txt", ios::app);
        fout << "\n" << ID;
        fout << "\n" << todo.task;
        fout.close();

        char more;
        cout << "Adicionar mais tarefas?" << endl;
        cout << "(1) SIM" << endl;
        cout << "(2) NAO" << endl;
        cin >> more;
        if(more == '1'){
            addTask();
        }
        else{
            system("cls");
            cout << "Adição feita com sucesso" << endl;
            return;
        }
    } else {
        showProgram();
    }

    
}

void showTask(){
    system("cls");
    banner();
    todolist todo;
    ifstream fin;
    fin.open("toDoList.txt");
    cout << "Tarefa: " << endl;

    while (!fin.eof())
    {
        fin >> todo.id;
        fin.ignore(); 
        getline(fin, todo.task);
        if(todo.task != ""){
            cout << "\t" << todo.id << ": " << todo.task << endl;   
        }
        else {
            cout << "A lista está vazia" << endl;
        }
    }
    fin.close();
    char exit;
    cout << "Voltar ao menu?" << endl;
    cout << "(1) SIM" << endl;
    cout << "(2) NAO" << endl;
    cin >> exit;
    if (exit == '1'){
        showProgram();
    } else {
        exitProgram();
    }
}

int searchTask(){
    system("cls");
    banner();
    int id;
    cout << "Insira o id da tarefa: ";
    cin >> id;
    todolist todo;
    ifstream fin("toDoList.txt");
    while(!fin.eof()){
        fin >> todo.id;
        fin.ignore();
        getline(fin, todo.task);
        if(todo.id == id){
            system("cls");
            cout << "\t" << todo.id << ": " << todo.task << endl;   
            return id;
        }
    }
    system("cls");
    cout << "Tarefa não encontrada" << endl;
    return 0;
}

void deleteTask(){
    system("cls");
    int id = searchTask();
    if(id != 0){
        char deletar;
        cout << "\n\tDeletar tarefa?" << endl;
        cout << "(1) SIM" << endl;
        cout << "(2) NAO" << endl;
        cin >> deletar;
        if(deletar == '1'){
            todolist todo;
            ofstream tempFile;
            tempFile.open("temp.txt");
            ifstream fin;
            fin.open("toDoList.txt");
            int index = 1;
            while(!fin.eof()){
                fin >> todo.id;
                fin.ignore();
                getline(fin, todo.task);
                if(todo.id != id){
                    tempFile << "\n" << index;
                    tempFile << "\n" << todo.task;
                    index++;
                    ID--;
                }
            }
            fin.close();
            tempFile.close();
            remove("toDoList.txt");
            rename("temp.txt", "toDoList.txt");
            system("cls");
            cout << "\n\tExclusão feita com sucesso!" << endl;
            showProgram();
        }
        else {
            system("cls");
            cout << "Não foi deletado" << endl;
            showProgram();
        }
    }
}