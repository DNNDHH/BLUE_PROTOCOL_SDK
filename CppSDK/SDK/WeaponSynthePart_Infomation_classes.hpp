#pragma once

 

// Package: WeaponSynthePart_Infomation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C
// 0x0040 (0x02B8 - 0x0278)
class UWeaponSynthePart_Infomation_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Text1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          In_Text1_Visible;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D51[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      In_Text1_Table;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         In_Text1_Id;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          In_Text2_Visible;                                  // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D52[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      In_Text2_Table;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         In_Text2_Id;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSynthePart_Infomation(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetText1Visible(bool InVisible);
	void SetText1Table(class USBTextTableAsset* In_Text_Table);
	void SetText1ID(int32 In_Text_Id);
	void SetText2Visible(bool InVisible);
	void SetText2Table(class USBTextTableAsset* In_Text_Table);
	void SetText2ID(int32 In_Text_Id);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_Infomation_C">();
	}
	static class UWeaponSynthePart_Infomation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_Infomation_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_Infomation_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_Infomation_C");
static_assert(sizeof(UWeaponSynthePart_Infomation_C) == 0x0002B8, "Wrong size on UWeaponSynthePart_Infomation_C");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_Infomation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, Text1) == 0x000280, "Member 'UWeaponSynthePart_Infomation_C::Text1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, Text2) == 0x000288, "Member 'UWeaponSynthePart_Infomation_C::Text2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text1_Visible) == 0x000290, "Member 'UWeaponSynthePart_Infomation_C::In_Text1_Visible' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text1_Table) == 0x000298, "Member 'UWeaponSynthePart_Infomation_C::In_Text1_Table' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text1_Id) == 0x0002A0, "Member 'UWeaponSynthePart_Infomation_C::In_Text1_Id' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text2_Visible) == 0x0002A4, "Member 'UWeaponSynthePart_Infomation_C::In_Text2_Visible' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text2_Table) == 0x0002A8, "Member 'UWeaponSynthePart_Infomation_C::In_Text2_Table' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_Infomation_C, In_Text2_Id) == 0x0002B0, "Member 'UWeaponSynthePart_Infomation_C::In_Text2_Id' has a wrong offset!");

}

