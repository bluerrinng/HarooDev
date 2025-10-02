#include <iostream>
#include <string>

using namespace std;

class Character
{
public:

    Character(int id, string name)          //생성자
    {
        this->id = id;
        this->name = name;

        cout << "캐릭터 생성 " << this << " - " << this->name << endl;
    }

    virtual ~Character()
    {
        cout << "캐릭터 소멸" << this << " - " << this->name << endl;
    }

    virtual void Move()
    {
        cout << "캐릭터 이동 " << this << " - " << this->name << endl;
    }

    virtual void Attack() = 0; 


protected:
    int id;
    string name;
};

class Player : public Character 
{
public:
    Player(int id, string name) : Character(id, name)
    {
        cout << "플레이어 생성 " << this << " - " << this->name;
        cout << endl;
    }

    ~Player() override{
        cout << "플레이어 소멸 " << this << " - " << this->name;
        cout << endl;
    }

    void Move() override
    {
        Character::Move();
        cout << "플레이어 이동 " << this << " - " << this->name;
        cout << endl;
    }

    void Attack() override
    {
        cout << "플레이어 공격 " << this << " - " << this->name;
        cout << endl;
    }

    void getHit()
    {
        cout << "플레이어가 공격 받음\n" << endl;
    }
};

int main()
{
    Character* player3 = new Player(3, "Player3");
    player3->Move();
    player3->Attack();
    delete player3;

    return 0; 
}