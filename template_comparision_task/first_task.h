#include <string_view>
#include <string>

template<typename T1>
class OtherComparisionOperators
{
public:

    template <typename T2>
    bool operator<=(const T2& other_object) const
    {
        return !(this_object() > other_object);
    }

    template <typename T2>
    bool operator>=(const T2& other_object) const
    {
        return !(this_object() < other_object);
    }

    template <typename T2>
    bool operator==(const T2& other_object) const
    {
        return !(this_object() < other_object) && !(this_object() > other_object);
    }

    template <typename T2>
    bool operator!=(const T2& other_object) const
    {
        return this_object() > other_object || this_object() < other_object;
    }
private:
    const T1& this_object() const
    {
        return *static_cast<const T1*>(this);
    }

};

class NewA : public OtherComparisionOperators<NewA>
{
public:
    NewA(int a, int b) : m_a(a), m_b(b){}

    // Операторы сравнения с NewA
    bool operator<(const NewA& other) const
    {
        return (m_a < other.m_a) && (m_b < other.m_b);
    }

    bool operator>(const NewA& other) const
    {
        return (m_a > other.m_a) && (m_b > other.m_b);
    }

    // Операторы сравнения с int
    bool operator<(const int other) const
    {
        return m_a < other;
    }

    bool operator>(const int other) const
    {
        return m_a > other;
    }

    // Операторы сравнения с char
    bool operator<(const char other) const
    {
        return m_a < static_cast<int>(other);
    }

    bool operator>(const char other) const
    {
        return m_a > static_cast<int>(other);
    }

    // Операторы сравнения с double
    bool operator<(const double other) const
    {
        return m_a < static_cast<int>(other);
    }

    bool operator>(const double other) const
    {
        return m_a > static_cast<int>(other);
    }

    // Операторы сравнения с float
    bool operator<(const float other) const
    {
        return m_a < static_cast<int>(other);
    }

    bool operator>(const float other) const
    {
        return m_a > static_cast<int>(other);
    }

private:
    int m_a = 0;
    int m_b = 0;
};

class NewB : public OtherComparisionOperators<NewB>
{
public:
    NewB(std::string_view val) : m_stringView(val) {}

    // Операторы сравнения с std::string
    bool operator<(const std::string& other) const
    {
        return m_stringView < other;
    }

    bool operator>(const std::string& other) const
    {
        return m_stringView > other;
    }

private:
    const std::string_view m_stringView;
};
