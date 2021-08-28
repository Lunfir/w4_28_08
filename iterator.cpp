#include <iostream>
#include <array>
#include <vector>

// class Container
// {
// public:
//     Container();
//     ~Container();

//     class Iterator
//     {
//         // operator++
//         // operator*
//         // ==, !=
//     };

//     // Iterator begin()
//     // Iterator end()

// };

template<typename Container, typename Type>
class Iterator
{
public:
    Iterator(Container* inContainer)
        : container(inContainer)
        , currentIndex(0)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    Iterator(Container* inContainer, int inIndex)
        : container(inContainer)
        , currentIndex(inIndex)
    {
    }

    Iterator& operator=(const Iterator& other)
    {
        this->container = other.container;
        this->currentIndex = other.currentIndex;

        return *this;
    }

    bool operator!=(const Iterator& other)
    {
        return  this->container != other.container ||
                this->currentIndex != other.currentIndex;
    }

    Iterator& operator++()
    {
        currentIndex += 1;
        return *this;
    }

    Type operator*()
    {
        return container->operator[](currentIndex);
    }


    Iterator begin() const
    {
        return Iterator(container, 0);
    }

    Iterator end() const
    {
        return Iterator(container, container->size());
    }

private:
    Container* container;
    int currentIndex;
};

int main()
{
    // std::array
    std::array<int, 4> arr = {1, 3, 5, 7};

    Iterator<std::array<int, 4>, int> iteratorArr(&arr);

    iteratorArr = iteratorArr.begin();
    for (; iteratorArr != iteratorArr.end(); ++iteratorArr)
    {
        std::cout << *iteratorArr << std::endl;
    }
    
    // std::vector
    std::vector<int> vec = {13, 33, 53, 73};

    Iterator<std::vector<int>, int> iteratorVec(&vec);

    iteratorVec = iteratorVec.begin();
    for (; iteratorVec != iteratorVec.end(); ++iteratorVec)
    {
        std::cout << *iteratorVec << std::endl;
    }

    return 0;
}