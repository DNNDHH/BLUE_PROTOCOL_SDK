#pragma once

 

// Package: DDOperation

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DDOperation.DDOperation_C
// 0x0010 (0x0098 - 0x0088)
class UDDOperation_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetRef;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              DDStartPosition;                                   // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DDOperation_C">();
	}
	static class UDDOperation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDDOperation_C>();
	}
};
static_assert(alignof(UDDOperation_C) == 0x000008, "Wrong alignment on UDDOperation_C");
static_assert(sizeof(UDDOperation_C) == 0x000098, "Wrong size on UDDOperation_C");
static_assert(offsetof(UDDOperation_C, WidgetRef) == 0x000088, "Member 'UDDOperation_C::WidgetRef' has a wrong offset!");
static_assert(offsetof(UDDOperation_C, DDStartPosition) == 0x000090, "Member 'UDDOperation_C::DDStartPosition' has a wrong offset!");

}

