#pragma once

 

// Package: QuestBoard_ListItemSeparator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C
// 0x0040 (0x02B8 - 0x0278)
class UQuestBoard_ListItemSeparator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Arrow;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_MaxLevel;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_MinLevel;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQuestBoardQuestData                   Data;                                              // 0x02A0(0x0018)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_QuestBoard_ListItemSeparator(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestBoard_ListItemSeparator_C">();
	}
	static class UQuestBoard_ListItemSeparator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestBoard_ListItemSeparator_C>();
	}
};
static_assert(alignof(UQuestBoard_ListItemSeparator_C) == 0x000008, "Wrong alignment on UQuestBoard_ListItemSeparator_C");
static_assert(sizeof(UQuestBoard_ListItemSeparator_C) == 0x0002B8, "Wrong size on UQuestBoard_ListItemSeparator_C");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, UberGraphFrame) == 0x000278, "Member 'UQuestBoard_ListItemSeparator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, Image_Arrow) == 0x000280, "Member 'UQuestBoard_ListItemSeparator_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, Image_BG) == 0x000288, "Member 'UQuestBoard_ListItemSeparator_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, Text_MaxLevel) == 0x000290, "Member 'UQuestBoard_ListItemSeparator_C::Text_MaxLevel' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, Text_MinLevel) == 0x000298, "Member 'UQuestBoard_ListItemSeparator_C::Text_MinLevel' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItemSeparator_C, Data) == 0x0002A0, "Member 'UQuestBoard_ListItemSeparator_C::Data' has a wrong offset!");

}

