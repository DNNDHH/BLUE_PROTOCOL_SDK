#pragma once

 

// Package: WeaponDescription

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponDescription.WeaponDescription_C
// 0x02A0 (0x0518 - 0x0278)
class UWeaponDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       Attribute1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       Attribute2;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Effect;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_9;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_12;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_14;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_15;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_16;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_17;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_19;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_342;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Atk;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Category;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Dex;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Hp;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Int;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxAtk;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxDex;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxHp;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxInt;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxMnd;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaXStr;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_MaxVit;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MinLevel;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Mnd;                                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Str;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TagVital;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TagVitalValue;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Vit;                                           // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Weapon_Detail;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ESBWeaponStatus, class UTextBlock*>      ParamTable;                                        // 0x03C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSBWeaponMasterData                    WeaponMasterData;                                  // 0x0418(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<ESBWeaponStatus, class UTextBlock*>      MaxParamTable;                                     // 0x04C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WeaponDescription(int32 EntryPoint);
	void Set_WeaponData(const struct FSBWeaponMasterData& Param_WeaponMasterData, int32 MinLevel, int32 MaxLevel);
	void Construct();
	void CollectWeaponParams();
	void UpdateWeaponParam(int32 NewParam);
	void UpdateMaxParam(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponDescription_C">();
	}
	static class UWeaponDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponDescription_C>();
	}
};
static_assert(alignof(UWeaponDescription_C) == 0x000008, "Wrong alignment on UWeaponDescription_C");
static_assert(sizeof(UWeaponDescription_C) == 0x000518, "Wrong size on UWeaponDescription_C");
static_assert(offsetof(UWeaponDescription_C, UberGraphFrame) == 0x000278, "Member 'UWeaponDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Attribute1) == 0x000280, "Member 'UWeaponDescription_C::Attribute1' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Attribute2) == 0x000288, "Member 'UWeaponDescription_C::Attribute2' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Cvs_Effect) == 0x000290, "Member 'UWeaponDescription_C::Cvs_Effect' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image) == 0x000298, "Member 'UWeaponDescription_C::Image' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_1) == 0x0002A0, "Member 'UWeaponDescription_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_2) == 0x0002A8, "Member 'UWeaponDescription_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_3) == 0x0002B0, "Member 'UWeaponDescription_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_4) == 0x0002B8, "Member 'UWeaponDescription_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_5) == 0x0002C0, "Member 'UWeaponDescription_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_6) == 0x0002C8, "Member 'UWeaponDescription_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_7) == 0x0002D0, "Member 'UWeaponDescription_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_8) == 0x0002D8, "Member 'UWeaponDescription_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_9) == 0x0002E0, "Member 'UWeaponDescription_C::Image_9' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_10) == 0x0002E8, "Member 'UWeaponDescription_C::Image_10' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_11) == 0x0002F0, "Member 'UWeaponDescription_C::Image_11' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_12) == 0x0002F8, "Member 'UWeaponDescription_C::Image_12' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_14) == 0x000300, "Member 'UWeaponDescription_C::Image_14' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_15) == 0x000308, "Member 'UWeaponDescription_C::Image_15' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_16) == 0x000310, "Member 'UWeaponDescription_C::Image_16' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_17) == 0x000318, "Member 'UWeaponDescription_C::Image_17' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_19) == 0x000320, "Member 'UWeaponDescription_C::Image_19' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Image_342) == 0x000328, "Member 'UWeaponDescription_C::Image_342' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Atk) == 0x000330, "Member 'UWeaponDescription_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Category) == 0x000338, "Member 'UWeaponDescription_C::Txt_Category' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Dex) == 0x000340, "Member 'UWeaponDescription_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Hp) == 0x000348, "Member 'UWeaponDescription_C::Txt_Hp' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Int) == 0x000350, "Member 'UWeaponDescription_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxAtk) == 0x000358, "Member 'UWeaponDescription_C::Txt_MaxAtk' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxDex) == 0x000360, "Member 'UWeaponDescription_C::Txt_MaxDex' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxHp) == 0x000368, "Member 'UWeaponDescription_C::Txt_MaxHp' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxInt) == 0x000370, "Member 'UWeaponDescription_C::Txt_MaxInt' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxMnd) == 0x000378, "Member 'UWeaponDescription_C::Txt_MaxMnd' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaXStr) == 0x000380, "Member 'UWeaponDescription_C::Txt_MaXStr' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MaxVit) == 0x000388, "Member 'UWeaponDescription_C::Txt_MaxVit' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_MinLevel) == 0x000390, "Member 'UWeaponDescription_C::Txt_MinLevel' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Mnd) == 0x000398, "Member 'UWeaponDescription_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Str) == 0x0003A0, "Member 'UWeaponDescription_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_TagVital) == 0x0003A8, "Member 'UWeaponDescription_C::Txt_TagVital' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_TagVitalValue) == 0x0003B0, "Member 'UWeaponDescription_C::Txt_TagVitalValue' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Txt_Vit) == 0x0003B8, "Member 'UWeaponDescription_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, Weapon_Detail) == 0x0003C0, "Member 'UWeaponDescription_C::Weapon_Detail' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, ParamTable) == 0x0003C8, "Member 'UWeaponDescription_C::ParamTable' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, WeaponMasterData) == 0x000418, "Member 'UWeaponDescription_C::WeaponMasterData' has a wrong offset!");
static_assert(offsetof(UWeaponDescription_C, MaxParamTable) == 0x0004C8, "Member 'UWeaponDescription_C::MaxParamTable' has a wrong offset!");

}

