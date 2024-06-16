#pragma once

 

// Package: MyCharaMenu_Drink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_Drink.MyCharaMenu_Drink_C
// 0x0070 (0x0320 - 0x02B0)
class UMyCharaMenu_Drink_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEffect_Drink_C*                        Effect_Drink;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Drink_C*                        Effect_Drink_116;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Drink_C*                        Effect_Drink_215;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Drink_C*                        Effect_Drink_343;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Drink_C*                        Effect_Drink_456;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Drink_C*                        Effect_Drink_568;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_133;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Active;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_NonActive;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            LiquidMemoryInfos;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_Drink(int32 EntryPoint);
	void Add_NonActive_Param(const class FText& Param_Name, float Value);
	void Add_Active_Param(const class FText& Param_Name, float Value, ESBLiquidMemoryEfficacyValueType EffucaryValueType);
	void Update_LiquidMemoryData();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_Drink_C">();
	}
	static class UMyCharaMenu_Drink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_Drink_C>();
	}
};
static_assert(alignof(UMyCharaMenu_Drink_C) == 0x000008, "Wrong alignment on UMyCharaMenu_Drink_C");
static_assert(sizeof(UMyCharaMenu_Drink_C) == 0x000320, "Wrong size on UMyCharaMenu_Drink_C");
static_assert(offsetof(UMyCharaMenu_Drink_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_Drink_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink) == 0x0002B8, "Member 'UMyCharaMenu_Drink_C::Effect_Drink' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink_116) == 0x0002C0, "Member 'UMyCharaMenu_Drink_C::Effect_Drink_116' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink_215) == 0x0002C8, "Member 'UMyCharaMenu_Drink_C::Effect_Drink_215' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink_343) == 0x0002D0, "Member 'UMyCharaMenu_Drink_C::Effect_Drink_343' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink_456) == 0x0002D8, "Member 'UMyCharaMenu_Drink_C::Effect_Drink_456' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Effect_Drink_568) == 0x0002E0, "Member 'UMyCharaMenu_Drink_C::Effect_Drink_568' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Image_133) == 0x0002E8, "Member 'UMyCharaMenu_Drink_C::Image_133' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, Img_Icon) == 0x0002F0, "Member 'UMyCharaMenu_Drink_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, VB_Active) == 0x0002F8, "Member 'UMyCharaMenu_Drink_C::VB_Active' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, VB_NonActive) == 0x000300, "Member 'UMyCharaMenu_Drink_C::VB_NonActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, LiquidMemoryInfos) == 0x000308, "Member 'UMyCharaMenu_Drink_C::LiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Drink_C, MasterDataManager) == 0x000318, "Member 'UMyCharaMenu_Drink_C::MasterDataManager' has a wrong offset!");

}

