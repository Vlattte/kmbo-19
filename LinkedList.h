#pragma once

using ValueType = double;

class LinkedList
{
	public:
		//����� ���� ������
		//�� ����� ����, ����� ��������� ����� ������,
		//����� ����������� � ������������� ������, ������ �������
		//���� � ������ � ���� �, � ������ �����, �������� ������ LinkedList
		//(������ �� �����, ����� �� ����� � �.�.)
		struct Node
		{
			Node(const ValueType& value, Node* next = nullptr);
			~Node();

			void insertNext(const ValueType& value);
			void removeNext();

			ValueType value;
			Node* next;
		};

	public:
		//==========================================================//
		LinkedList(); //����������� �� ���������
		LinkedList(const LinkedList& copyList); //����������� �����������
		LinkedList& operator=(const LinkedList& copyList); 

		LinkedList(LinkedList&& moveList) noexcept; // ����������� � ����������� ��������� �������
		LinkedList& operator=(LinkedList&& movelist) noexcept;
		~LinkedList();
		//==========================================================//

		// ������ � �������� �������� �� �������
		ValueType& operator[](const size_t pos) const;
		//������ � ���� �� �������
		LinkedList::Node* getNode(const size_t pos) const;

		//������� �������� �� �������, ������� ����, ���� ��������� (O(n)), ����� ��������� (O(1))
		void insert(const size_t pos, const ValueType& value);
		//������� �������� ����� ����, (O(1))
		static void insertAfterNode(Node* node, const ValueType& value);
		//������� � ����� (O(n))
		void pushBack(const ValueType& value);
		//������� � ������ (O(1))
		void pushFront(const ValueType& value);

		// ��������
		void remove(const size_t pos);
		void removeNextNode(Node* node);
		void removeFront();
		void removeBack();

		//�����, (O(n))
		long long int findIndex(const ValueType& value) const; //����� ������� ���� � ���� value
		Node* findNode(const ValueType& value) const; //����� ���� � ����� value

		//�������� ������
		void reverse();
		LinkedList reverse() const;
		LinkedList getReverseList() const;

		size_t size() const;

		void write() const; //����� ��������� ������

	private:
		Node* _head;
		size_t _size;

		void forceNodeDelete(Node* node);
};

