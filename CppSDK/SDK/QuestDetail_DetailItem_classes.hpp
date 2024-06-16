#pragma once

 

// Package: QuestDetail_DetailItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_DetailItem.QuestDetail_DetailItem_C
// 0x0030 (0x02A8 - 0x0278)
class UQuestDetail_DetailItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg1;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Text_Body;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TitleTextId;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestDetail_DetailItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetTitle(int32 InTitleText);
	void SetTextContent(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_DetailItem_C">();
	}
	static class UQuestDetail_DetailItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_DetailItem_C>();
	}
};
static_assert(alignof(UQuestDetail_DetailItem_C) == 0x000008, "Wrong alignment on UQuestDetail_DetailItem_C");
static_assert(sizeof(UQuestDetail_DetailItem_C) == 0x0002A8, "Wrong size on UQuestDetail_DetailItem_C");
static_assert(offsetof(UQuestDetail_DetailItem_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_DetailItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetailItem_C, Bg1) == 0x000280, "Member 'UQuestDetail_DetailItem_C::Bg1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetailItem_C, Image_1) == 0x000288, "Member 'UQuestDetail_DetailItem_C::Image_1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetailItem_C, Label_Title) == 0x000290, "Member 'UQuestDetail_DetailItem_C::Label_Title' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetailItem_C, Text_Body) == 0x000298, "Member 'UQuestDetail_DetailItem_C::Text_Body' has a wrong offset!");
static_assert(offsetof(UQuestDetail_DetailItem_C, TitleTextId) == 0x0002A0, "Member 'UQuestDetail_DetailItem_C::TitleTextId' has a wrong offset!");

}

