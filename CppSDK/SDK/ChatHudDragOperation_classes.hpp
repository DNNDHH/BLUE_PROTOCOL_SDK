#pragma once

 

// Package: ChatHudDragOperation

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ChatHudDragOperation.ChatHudDragOperation_C
// 0x0010 (0x0098 - 0x0088)
class UChatHudDragOperation_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetRef;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              DragStartPos;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatHudDragOperation_C">();
	}
	static class UChatHudDragOperation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatHudDragOperation_C>();
	}
};
static_assert(alignof(UChatHudDragOperation_C) == 0x000008, "Wrong alignment on UChatHudDragOperation_C");
static_assert(sizeof(UChatHudDragOperation_C) == 0x000098, "Wrong size on UChatHudDragOperation_C");
static_assert(offsetof(UChatHudDragOperation_C, WidgetRef) == 0x000088, "Member 'UChatHudDragOperation_C::WidgetRef' has a wrong offset!");
static_assert(offsetof(UChatHudDragOperation_C, DragStartPos) == 0x000090, "Member 'UChatHudDragOperation_C::DragStartPos' has a wrong offset!");

}

