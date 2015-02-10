#include "geometry.h"

Vec2i vec2i_sum(const Vec2i a, const Vec2i b) {
	Vec2i c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

Vec2f vec2f_sum(const Vec2f a, const Vec2f b) {
	Vec2f c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

Vec3i vec3i_sum(const Vec3i a, const Vec3i b) {
	Vec3i c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

Vec3f vec3f_sum(const Vec3f a, const Vec3f b) {
	Vec3f c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

Vec2i vec2i_neg(const Vec2i a) {
	Vec2i c;
	c.x = -a.x;
	c.y = -a.y;
	return c;
}

Vec2f vec2f_neg(const Vec2f a) {
	Vec2f c;
	c.x = -a.x;
	c.y = -a.y;
	return c;
}

Vec3i vec3i_neg(const Vec3i a) {
	Vec3i c;
	c.x = -a.x;
	c.y = -a.y;
	c.z = -a.z;
	return c;
}

Vec3f vec3f_neg(const Vec3f a) {
	Vec3f c;
	c.x = -a.x;
	c.y = -a.y;
	c.z = -a.z;
	return c;
}

Vec2i vec2i_muli(const Vec2i a, const int b) {
	Vec2i c;
	c.x = a.x * b;
	c.y = a.y * b;
	return c;
}

Vec2f vec2f_muli(const Vec2f a, const int b) {
	Vec2f c;
	c.x = a.x * b;
	c.y = a.y * b;
	return c;
}

Vec3i vec3i_muli(const Vec3i a, const int b) {
	Vec3i c;
	c.x = a.x * b;
	c.y = a.y * b;
	c.z = a.z * b;
	return c;
}

Vec3f vec3f_muli(const Vec3f a, const int b) {
	Vec3f c;
	c.x = a.x * b;
	c.y = a.y * b;
	c.z = a.z * b;
	return c;
}

Vec2i vec2i_mulf(const Vec2i a, const float b) {
	Vec2i c;
	c.x = a.x * b;
	c.y = a.y * b;
	return c;
}

Vec2f vec2f_mulf(const Vec2f a, const float b) {
	Vec2f c;
	c.x = a.x * b;
	c.y = a.y * b;
	return c;
}

Vec3i vec3i_mulf(const Vec3i a, const float b) {
	Vec3i c;
	c.x = a.x * b;
	c.y = a.y * b;
	c.z = a.z * b;
	return c;
}

Vec3f vec3f_mulf(const Vec3f a, const float b) {
	Vec3f c;
	c.x = a.x * b;
	c.y = a.y * b;
	c.z = a.z * b;
	return c;
}

int vec2i_dot(const Vec2i a, const Vec2i b) {
	int res = 0;
	res = a.x * b.x + a.y * b.y;
	return res;
}

int vec3i_dot(const Vec3i a, const Vec3i b) {
	int res = 0;
	res = a.x * b.x + a.y * b.y + a.z * b.z;
	return res;
}

double vec2f_dot(const Vec2f a, const Vec2f b) {
	double res = 0;
	res = a.x * b.x + a.y * b.y;
	return res;
}

double vec3f_dot(const Vec3f a, const Vec3f b) {
	double res = 0;
	res = a.x * b.x + a.y * b.y + a.z * b.z;
	return res;
}


Vec3i vec3i_cross(const Vec3i a, const Vec3i b) {
	Vec3i res;
	res.x = a.y * b.z - a.z * b.y;
	res.y = a.z * b.x - a.x * b.z;
	res.z = a.x * b.y - a.y * b.x;
	return res;
}

Vec3f vec3f_cross(const Vec3f a, const Vec3f b) {
	Vec3f res;
	res.x = a.y * b.z - a.z * b.y;
	res.y = a.z * b.x - a.x * b.z;
	res.z = a.x * b.y - a.y * b.x;
	return res;
}