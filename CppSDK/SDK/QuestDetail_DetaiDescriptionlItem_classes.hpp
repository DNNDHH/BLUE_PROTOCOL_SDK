#pragma once

 

// Package: QuestDetail_DetaiDescriptionlItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C
// 0x0018 (0x0290 - 0x0278)
class UQuestDetail_DetaiDescriptionlItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Text_Body;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TitleTextId;                                       // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetTitle(int32 InTitleText);
	void SetTextContent(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_DetaiDescriptionlItem_C">();
	}
	static class UQuestDetail_DetaiDescriptionlItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_DetaiDescriptionlItem_C>();
	}
};
static_assert(alignof(UQuestDetail_DetaiDescriptionlItem_C) == 0x000008, "Wrong alignment on UQuestDetail_DetaiDescriptionlItem_C");
static_assert(sizeof(UQuestDetail_DetaiDescriptionlItem_C) == 0x000290, "Wrong size on UQuestDetail_DetaiDescriptionlItem_C");
static_assert(offsetof(UQuestDetail_DetaiDescriptionlItem_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_DetaiDescriptionlItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetaiDescriptionlItem_C, Text_Body) == 0x000280, "Member 'UQuestDetail_DetaiDescriptionlItem_C::Text_Body' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetaiDescriptionlItem_C, TitleTextId) == 0x000288, "Member 'UQuestDetail_DetaiDescriptionlItem_C::TitleTextId' has a wrong offset!");

}

