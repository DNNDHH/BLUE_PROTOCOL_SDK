#pragma once

 

// Package: EquipStatusView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipStatusView.EquipStatusView_C
// 0x01B0 (0x0428 - 0x0278)
class UEquipStatusView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    DEX;                                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    INT;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MND;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_EquipStatus;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    STR;                                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    VIT;                                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BoxWidth;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A84[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            FontColor;                                         // 0x02E0(0x0028)(Edit, BlueprintVisible)
	float                                         FontSizeTitle;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FontSizeParam;                                     // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0310(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_EquipStatusView(int32 EntryPoint);
	void Construct();
	void SetValue(const struct FOwnItemInfo& Info);
	void SetImagine(const struct FOwnItemInfo& Info);
	void SetWeapon(const struct FOwnItemInfo& Info);
	void SetPrevData(const struct FOwnItemInfo& Param_OwnItemInfo);
	void SetPrevDataImagine(const struct FOwnItemInfo& PrevInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipStatusView_C">();
	}
	static class UEquipStatusView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipStatusView_C>();
	}
};
static_assert(alignof(UEquipStatusView_C) == 0x000008, "Wrong alignment on UEquipStatusView_C");
static_assert(sizeof(UEquipStatusView_C) == 0x000428, "Wrong size on UEquipStatusView_C");
static_assert(offsetof(UEquipStatusView_C, UberGraphFrame) == 0x000278, "Member 'UEquipStatusView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, DEX) == 0x000280, "Member 'UEquipStatusView_C::DEX' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, INT) == 0x000288, "Member 'UEquipStatusView_C::INT' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, MND) == 0x000290, "Member 'UEquipStatusView_C::MND' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, SB_EquipStatus) == 0x000298, "Member 'UEquipStatusView_C::SB_EquipStatus' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, STR) == 0x0002A0, "Member 'UEquipStatusView_C::STR' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, Txt_Dex) == 0x0002A8, "Member 'UEquipStatusView_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, Txt_Int) == 0x0002B0, "Member 'UEquipStatusView_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, Txt_Mnd) == 0x0002B8, "Member 'UEquipStatusView_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, Txt_Str) == 0x0002C0, "Member 'UEquipStatusView_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, Txt_Vit) == 0x0002C8, "Member 'UEquipStatusView_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, VIT) == 0x0002D0, "Member 'UEquipStatusView_C::VIT' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, BoxWidth) == 0x0002D8, "Member 'UEquipStatusView_C::BoxWidth' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, FontColor) == 0x0002E0, "Member 'UEquipStatusView_C::FontColor' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, FontSizeTitle) == 0x000308, "Member 'UEquipStatusView_C::FontSizeTitle' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, FontSizeParam) == 0x00030C, "Member 'UEquipStatusView_C::FontSizeParam' has a wrong offset!");
static_assert(offsetof(UEquipStatusView_C, OwnItemInfo) == 0x000310, "Member 'UEquipStatusView_C::OwnItemInfo' has a wrong offset!");

}

