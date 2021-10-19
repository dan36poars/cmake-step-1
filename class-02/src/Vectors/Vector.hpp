/**
 * @file Vector.hpp
 * @author Daniel Corrêa (dev.geekyweb@domain.com)
 * @brief Lybrary for handling Vectors in 2D.
 * @version 0.1
 * @date 2021-10-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <iostream>
#include <math.h>

template <class T = int>
class Vector
{
private:
    /* data */
    T x, y;

public:
    /* Construct/Destruct */

    Vector()
    {
        this->x = 0;
        this->y = 0;
    };

    Vector(const T &_x, const T &_y) : x(_x), y(_y){};

    Vector(const Vector<T> &_obj)
    {
        this->x = _obj.x;
        this->y = _obj.y;
    };

    virtual ~Vector(){};

    /* Public Methods */

    /**
     * @brief Get the Vector object
     * 
     */
    void getVector() const
    {
        std::cout << "{" << this->x << ", " << this->y << "}" << std::endl;
    };

    /**
     * @brief Copy Vector to another Vector Object
     * 
     * @param _vector 
     * @return Vector<T>& 
     */
    Vector<T> &operator=(const Vector<T> &_vector)
    {
        this->x = _vector.x;
        this->y = _vector.y;
        return *this;
    };

    /**
     * @brief Set the Vector object
     * 
     * @param _x 
     * @param _y 
     */
    void setVector(const T _x, const T _y)
    {
        this->x = _x;
        this->y = _y;
    };

    /**
     * @brief add two vector2D
     * 
     * @param _vector 
     * @return Vector<T>& 
     */
    const Vector<T> operator+(const Vector<T> &_vector) const
    {
        Vector<T> temp{0, 0};

        temp.x = this->x + _vector.x;
        temp.y = this->y + _vector.y;
        return temp;
    };

    const T getMagnitude() const
    {
        T x, y, temp;
        x = this->x;
        y = this->y;
        temp = std::sqrt((x * x) + (y * y));
        return temp;
    };
};

#endif // __VECTOR_H__