#pragma once
template <class Key, class Value, class HashFunc, class EqualKey>
class CHashMap
{

private:
	template <class _Key, class _Value>
	class KeyNode
	{
	public:
		_Value  value;      //Store the value
		_Key    key;        //Store the keyword
		int    used;
		//if the type of Value/Key is your own class, make sure they can handle copy constructor and operator =
		KeyNode() :used(0){}
		KeyNode(const KeyNode & kn)
		{
			value = kn.value;
			key = kn.key;
			used = kn.used;
		}
		KeyNode & operator=(const KeyNode & kn)
		{
			if (this == &kn) return *this;
			value = kn.value;
			key = kn.key;
			used = kn.used;
			return *this;
		}
	};

public:
	HashMap();
	~HashMap();
	bool insert(const Key& hashKey, const Value& value);
	bool remove(const Key& hashKey);
	void rehash();  //use it when rehashing
	Value& find(const Key& hashKey);
	const Value& operator [](const Key& hashKey) const;
	Value& operator [](const Key& hashKey);

private:
	HashFunc hash;
	EqualKey equal;
	HashMapUtil hml;
	KeyNode<Key, Value> *table;
	int size;    //current number of itmes
	int capacity;   //capacity of the array
	static const double loadingFactor;
	int findKey(const Key& hashKey);  //find the index of a key
};


