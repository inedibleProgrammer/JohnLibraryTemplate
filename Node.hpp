#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
    public:
        Node(T data)
        {
            this->data = data;
        }

        virtual ~Node(){}

        T GetData() const
        {
            return this->data;
        }

        void SetData(T data)
        {
            this->data = data;
        }

    private:
        T data;
};

#endif // NODE_H