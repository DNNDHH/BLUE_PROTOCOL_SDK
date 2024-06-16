#pragma once

 

// Package: ChatHudResizeOperation

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ChatHudResizeOperation.ChatHudResizeOperation_C
// 0x0008 (0x0090 - 0x0088)
class UChatHudResizeOperation_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetRef;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatHudResizeOperation_C">();
	}
	static class UChatHudResizeOperation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatHudResizeOperation_C>();
	}
};
static_assert(alignof(UChatHudResizeOperation_C) == 0x000008, "Wrong alignment on UChatHudResizeOperation_C");
static_assert(sizeof(UChatHudResizeOperation_C) == 0x000090, "Wrong size on UChatHudResizeOperation_C");
static_assert(offsetof(UChatHudResizeOperation_C, WidgetRef) == 0x000088, "Member 'UChatHudResizeOperation_C::WidgetRef' has a wrong offset!");

}

