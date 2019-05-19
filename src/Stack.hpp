#pragma once

#include <iostream>

class EmptyStack : public std::exception
{
public:
    char const* what() const noexcept override;
};

template<typename T, int N>
class Stack
{
private:
    int m_index = -1;
    T m_data[N];
public:
    explicit Stack() = default;

    void push(T item) {
        if (m_index < N)
            m_data[++m_index] = item;
    }

    T pop() {
        if (m_index >= 0)
            return m_data[m_index--];
        else
            throw EmptyStack();
    }

    T top() {
        if (m_index >= 0)
            return m_data[m_index];
        else
            throw EmptyStack(); 
    }

    int size() {
        return m_index + 1;
    }

    ~Stack() = default;
};