#pragma once

 

// Package: CustomMeshComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0024 (0x0024 - 0x0000)
struct FCustomMeshTriangle final
{
public:
	struct FVector                                Vertex0;                                           // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex1;                                           // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Vertex2;                                           // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomMeshTriangle) == 0x000004, "Wrong alignment on FCustomMeshTriangle");
static_assert(sizeof(FCustomMeshTriangle) == 0x000024, "Wrong size on FCustomMeshTriangle");
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x000000, "Member 'FCustomMeshTriangle::Vertex0' has a wrong offset!");
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x00000C, "Member 'FCustomMeshTriangle::Vertex1' has a wrong offset!");
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x000018, "Member 'FCustomMeshTriangle::Vertex2' has a wrong offset!");

}
