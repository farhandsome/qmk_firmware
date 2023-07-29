/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0A, k1A, k0B, k1B, k0C, k1C, k0D, k1D, k0E, k1E, k0F, k1F, k0G, k1G, k0H, k1H, k0I, k1I, k0J, k1J, k2A, k3A, k2B, k3B, k2C, k3C, k2D, k3D, k2E, k3E, k2F, k3F, k2G, k3G, k2H, k3H, k2I, k3J, k2J, k4A, k5A, k4B, k4C, k5C, k4D, k5D, k4E, k5E, k4F, k5F, k4G, k5G, k4H, k5I, k6A, k7A, k6B, k7C, k6C, k7D, k6D, k7E, k6E, k7F, k6F, k7G, k6G, k7H, k6I, k7J, k8A, k9A, k8B, k9B, k8C, k9E, k8G, k9H, k8H, k9I, k8I, k9J, k8J \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J}, \
	{k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J}, \
	{k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J}, \
	{k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, XXX, k3J}, \
	{k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, XXX, XXX}, \
	{k5A, XXX, k5C, k5D, k5E, k5F, k5G, XXX, k5I, XXX}, \
	{k6A, k6B, k6C, k6D, k6E, k6F, k6G, XXX, k6I, XXX}, \
	{k7A, XXX, k7C, k7D, k7E, k7F, k7G, k7H, XXX, k7J}, \
	{k8A, k8B, k8C, XXX, XXX, XXX, k8G, k8H, k8I, k8J}, \
	{k9A, k9B, XXX, XXX, k9E, XXX, XXX, k9H, k9I, k9J} \
}
