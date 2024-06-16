#pragma once

 

// Package: KeyGuide_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide_Item.KeyGuide_Item_C
// 0x0020 (0x0298 - 0x0278)
class UKeyGuide_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    ActionNameText;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ActionText;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ActionTextId;                                      // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            ActionConfig;                                      // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_KeyGuide_Item(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide_Item_C">();
	}
	static class UKeyGuide_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide_Item_C>();
	}
};
static_assert(alignof(UKeyGuide_Item_C) == 0x000008, "Wrong alignment on UKeyGuide_Item_C");
static_assert(sizeof(UKeyGuide_Item_C) == 0x000298, "Wrong size on UKeyGuide_Item_C");
static_assert(offsetof(UKeyGuide_Item_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Item_C, ActionNameText) == 0x000280, "Member 'UKeyGuide_Item_C::ActionNameText' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Item_C, ActionText) == 0x000288, "Member 'UKeyGuide_Item_C::ActionText' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Item_C, ActionTextId) == 0x000290, "Member 'UKeyGuide_Item_C::ActionTextId' has a wrong offset!");
static_assert(offsetof(UKeyGuide_Item_C, ActionConfig) == 0x000294, "Member 'UKeyGuide_Item_C::ActionConfig' has a wrong offset!");

}

