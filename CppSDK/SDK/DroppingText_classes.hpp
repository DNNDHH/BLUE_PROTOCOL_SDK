#pragma once

 

// Package: DroppingText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DroppingText.DroppingText_C
// 0x0040 (0x0308 - 0x02C8)
class UDroppingText_C final : public USBDroppingTextBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Text;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TextSlot;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsRemoved;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DroppingText(int32 EntryPoint);
	void SetMessageTextInFree(const class FText& InText, ESBDroppingTextOption Option);
	void SetMessageTextInItemName(const class FText& ItemName, const int32 Amount, ESBDroppingTextOption Option);
	void Destruct();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void SetMessageTextInItem(const EItemType ItemType, const int32 ItemId, const int32 Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Start();
	void Construct();
	class FText GetItemIdToText(int32 ID, EItemType ItemType, bool bUnidentified, bool* IsValid);
	void SetTextColor(ESBDroppingTextOption Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DroppingText_C">();
	}
	static class UDroppingText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDroppingText_C>();
	}
};
static_assert(alignof(UDroppingText_C) == 0x000008, "Wrong alignment on UDroppingText_C");
static_assert(sizeof(UDroppingText_C) == 0x000308, "Wrong size on UDroppingText_C");
static_assert(offsetof(UDroppingText_C, UberGraphFrame) == 0x0002C8, "Member 'UDroppingText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, AnimIn) == 0x0002D0, "Member 'UDroppingText_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, Bg1) == 0x0002D8, "Member 'UDroppingText_C::Bg1' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, CanvasPanel_2) == 0x0002E0, "Member 'UDroppingText_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, Line1) == 0x0002E8, "Member 'UDroppingText_C::Line1' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, Text) == 0x0002F0, "Member 'UDroppingText_C::Text' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, TextSlot) == 0x0002F8, "Member 'UDroppingText_C::TextSlot' has a wrong offset!");
static_assert(offsetof(UDroppingText_C, IsRemoved) == 0x000300, "Member 'UDroppingText_C::IsRemoved' has a wrong offset!");

}

