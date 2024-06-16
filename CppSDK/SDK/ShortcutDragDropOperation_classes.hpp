#pragma once

 

// Package: ShortcutDragDropOperation

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShortcutDragDropOperation.ShortcutDragDropOperation_C
// 0x0018 (0x00A0 - 0x0088)
class UShortcutDragDropOperation_C final : public UDragDropOperation
{
public:
	class UUserWidget*                            WidgetRef;                                         // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              DragStartPos;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_ShortcutDragDropOperation_C;                 // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutDragDropOperation_C">();
	}
	static class UShortcutDragDropOperation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutDragDropOperation_C>();
	}
};
static_assert(alignof(UShortcutDragDropOperation_C) == 0x000008, "Wrong alignment on UShortcutDragDropOperation_C");
static_assert(sizeof(UShortcutDragDropOperation_C) == 0x0000A0, "Wrong size on UShortcutDragDropOperation_C");
static_assert(offsetof(UShortcutDragDropOperation_C, WidgetRef) == 0x000088, "Member 'UShortcutDragDropOperation_C::WidgetRef' has a wrong offset!");
static_assert(offsetof(UShortcutDragDropOperation_C, DragStartPos) == 0x000090, "Member 'UShortcutDragDropOperation_C::DragStartPos' has a wrong offset!");
static_assert(offsetof(UShortcutDragDropOperation_C, Index_ShortcutDragDropOperation_C) == 0x000098, "Member 'UShortcutDragDropOperation_C::Index_ShortcutDragDropOperation_C' has a wrong offset!");

}

