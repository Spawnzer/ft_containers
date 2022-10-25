/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:46:42 by adubeau           #+#    #+#             */
/*   Updated: 2022/10/24 23:46:44 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP
namespace ft
{
	template<class T, class Alloc = std::allocator <T> >
	class vector
	{
		private:
			allocator_type  alloc;
			pointer         start;
			pointer         end;
			pointer         end_capacity;

		public:
			void assign(size_type count, const Type &value) {}

			void assign(initializer_list <Type> init_list) {}

			template<class InputIterator>
				void assign(InputIterator first, InputIterator last) {}

			reference at(size_type position) {}

			const_reference at(size_type position) const {}

			reference back() {}

			const_reference back() const {}

			const_iterator begin() const {return (this->start);}

			iterator begin() {return (this->start);} t

			size_type capacity() const {}

			const_iterator cbegin() const {}

			const_iterator cend() const {}

			void clear() {}

			typedef implementation-
			defined const_iterator;
			typedef typename Allocator::const_pointer const_pointer;
			typedef typename Allocator::const_reference const_reference;
			typedef std::reverse_iterator <const_iterator> const_reverse_iterator;

			const_reverse_iterator crbegin() const {}

			const_reverse_iterator crend() const {}

			const_pointer data() const {}

			pointer data() {}

			typedef typename Allocator::difference_type difference_type;

			template<class... Types>
				iterator emplace(const_iterator position, Types &&... args) {}

			template<class... Types>
				void emplace_back(Types &&... args) {}

			bool empty() const {}

			iterator end() {
				if (this->empty())
					return (this->start);
				return (this->end);
			}

			const_iterator end() const {return (this->end);}

			iterator erase(const_iterator position) {}

			iterator erase(const_iterator first, const_iterator last) {}

			reference front() {}

			const_reference front() const {}

			Allocator get_allocator() const {}

			iterator insert(const_iterator position, const Type &value) {}

			iterator insert(const_iterator position, Type &&value) {}

			void insert(const_iterator position, size_type count, const Type &value) {}

			template<class InputIterator>
				void insert(const_iterator position, InputIterator first, InputIterator last) {}

			typedef implementation-defined iterator{};

			size_type max_size() const {}

			typedef typename Allocator::pointer pointer{};

			void pop_back() {}

			void push_back(const T &value) {}

			void push_back(T &&value) {}

			reverse_iterator rbegin() {}

			const_reverse_iterator rbegin() const {}

			typedef typename Allocator::reference reference;

			const_reverse_iterator rend() const {}

			reverse_iterator rend() {}

			void reserve(size_type count) {}

			void resize(size_type new_size) {}

			void resize(size_type new_size, Type value) {}

			typedef std::reverse_iterator <iterator> reverse_iterator{};

			void shrink_to_fit() {}

			size_type size() const {}

			typedef typename Allocator::size_type size_type{};

			void swap(vector<Type, Allocator> &right);

			friend void swap(vector<Type, Allocator> &left, vector<Type, Allocator> &right) {}

			typedef typename Allocator::value_type value_type{};

			vector() {}

			explicit vector(const Allocator &allocator) {}

			explicit vector(size_type count) {}

			vector(size_type count, const Type &value) {}

			vector(size_type count, const Type &value, const Allocator &allocator) {}

			vector(const vector &source) {}

			vector(vector &&source) {}

			vector(initializer_list <Type> init_list, const Allocator &allocator) {}

			template<class InputIterator>
				vector(InputIterator first, InputIterator last) {}

			template<class InputIterator>
				vector(InputIterator first, InputIterator last, const Allocator &allocator) {}
	}
	template <class T, class Alloc>
			reference operator[](size_type position) {}

	template <class T, class Alloc>
		const_reference operator[](size_type position) const {}

	template <class T, class Alloc>
			vector &operator=(const vector &right) {}

	template <class T, class Alloc>
		vector &operator=(vector &&right) {}
}

# endif
