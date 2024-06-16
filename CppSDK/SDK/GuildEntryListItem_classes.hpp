#pragma once

 

// Package: GuildEntryListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildEntryListItem.GuildEntryListItem_C
// 0x0130 (0x03A8 - 0x0278)
class UGuildEntryListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_30;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconL_C*                          ClassIconL;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SelectRim;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_ClassLv;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EntryName;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Remain_Guide;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildEntryData                        EntryData;                                         // 0x02C8(0x00E0)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_GuildEntryListItem(int32 EntryPoint);
	void Unselected();
	void LoadFaceIcon(const class FString& URL);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void Set_EntryData(const struct FGuildEntryData& Entry);
	void InitializeEntryData();
	void GetEntry(struct FGuildEntryData* Param_EntryData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildEntryListItem_C">();
	}
	static class UGuildEntryListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildEntryListItem_C>();
	}
};
static_assert(alignof(UGuildEntryListItem_C) == 0x000008, "Wrong alignment on UGuildEntryListItem_C");
static_assert(sizeof(UGuildEntryListItem_C) == 0x0003A8, "Wrong size on UGuildEntryListItem_C");
static_assert(offsetof(UGuildEntryListItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildEntryListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, Button_30) == 0x000280, "Member 'UGuildEntryListItem_C::Button_30' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, CaptureImageFace) == 0x000288, "Member 'UGuildEntryListItem_C::CaptureImageFace' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, ClassIconL) == 0x000290, "Member 'UGuildEntryListItem_C::ClassIconL' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, Img_SelectRim) == 0x000298, "Member 'UGuildEntryListItem_C::Img_SelectRim' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, ScaleBox_ClassLv) == 0x0002A0, "Member 'UGuildEntryListItem_C::ScaleBox_ClassLv' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, Txt_Comment) == 0x0002A8, "Member 'UGuildEntryListItem_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, Txt_EntryName) == 0x0002B0, "Member 'UGuildEntryListItem_C::Txt_EntryName' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, Txt_Remain_Guide) == 0x0002B8, "Member 'UGuildEntryListItem_C::Txt_Remain_Guide' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, TxtLv) == 0x0002C0, "Member 'UGuildEntryListItem_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UGuildEntryListItem_C, EntryData) == 0x0002C8, "Member 'UGuildEntryListItem_C::EntryData' has a wrong offset!");

}

