#pragma once

 

// Package: DroppingTextRare

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DroppingTextRare.DroppingTextRare_C
// 0x0048 (0x0310 - 0x02C8)
class UDroppingTextRare_C final : public USBDroppingTextBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EffectImage;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Text;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TextSlot;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsRemoved;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DroppingTextRare(int32 EntryPoint);
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
		return StaticBPGeneratedClassImpl<"DroppingTextRare_C">();
	}
	static class UDroppingTextRare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDroppingTextRare_C>();
	}
};
static_assert(alignof(UDroppingTextRare_C) == 0x000008, "Wrong alignment on UDroppingTextRare_C");
static_assert(sizeof(UDroppingTextRare_C) == 0x000310, "Wrong size on UDroppingTextRare_C");
static_assert(offsetof(UDroppingTextRare_C, UberGraphFrame) == 0x0002C8, "Member 'UDroppingTextRare_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, AnimIn) == 0x0002D0, "Member 'UDroppingTextRare_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, Bg1) == 0x0002D8, "Member 'UDroppingTextRare_C::Bg1' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, CanvasPanel_2) == 0x0002E0, "Member 'UDroppingTextRare_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, EffectImage) == 0x0002E8, "Member 'UDroppingTextRare_C::EffectImage' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, Line1) == 0x0002F0, "Member 'UDroppingTextRare_C::Line1' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, Text) == 0x0002F8, "Member 'UDroppingTextRare_C::Text' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, TextSlot) == 0x000300, "Member 'UDroppingTextRare_C::TextSlot' has a wrong offset!");
static_assert(offsetof(UDroppingTextRare_C, IsRemoved) == 0x000308, "Member 'UDroppingTextRare_C::IsRemoved' has a wrong offset!");

}

