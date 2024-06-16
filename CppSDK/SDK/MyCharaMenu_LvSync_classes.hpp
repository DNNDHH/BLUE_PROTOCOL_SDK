#pragma once

 

// Package: MyCharaMenu_LvSync

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_LvSync.MyCharaMenu_LvSync_C
// 0x0068 (0x02E0 - 0x0278)
class UMyCharaMenu_LvSync_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMyCharaMenu_LvSyncNum3_C*              Attack;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              Critical;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              CriticalPer;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              Defense;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              DEX;                                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              INT;                                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum1_C*              Lv;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              MND;                                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              Resilience;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              STR;                                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum2_C*              TotalPower;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LvSyncNum3_C*              VIT;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_LvSync(int32 EntryPoint);
	void Construct();
	void Update(bool bIsLevelSync);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_LvSync_C">();
	}
	static class UMyCharaMenu_LvSync_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_LvSync_C>();
	}
};
static_assert(alignof(UMyCharaMenu_LvSync_C) == 0x000008, "Wrong alignment on UMyCharaMenu_LvSync_C");
static_assert(sizeof(UMyCharaMenu_LvSync_C) == 0x0002E0, "Wrong size on UMyCharaMenu_LvSync_C");
static_assert(offsetof(UMyCharaMenu_LvSync_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_LvSync_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, Attack) == 0x000280, "Member 'UMyCharaMenu_LvSync_C::Attack' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, Critical) == 0x000288, "Member 'UMyCharaMenu_LvSync_C::Critical' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, CriticalPer) == 0x000290, "Member 'UMyCharaMenu_LvSync_C::CriticalPer' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, Defense) == 0x000298, "Member 'UMyCharaMenu_LvSync_C::Defense' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, DEX) == 0x0002A0, "Member 'UMyCharaMenu_LvSync_C::DEX' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, INT) == 0x0002A8, "Member 'UMyCharaMenu_LvSync_C::INT' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, Lv) == 0x0002B0, "Member 'UMyCharaMenu_LvSync_C::Lv' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, MND) == 0x0002B8, "Member 'UMyCharaMenu_LvSync_C::MND' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, Resilience) == 0x0002C0, "Member 'UMyCharaMenu_LvSync_C::Resilience' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, STR) == 0x0002C8, "Member 'UMyCharaMenu_LvSync_C::STR' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, TotalPower) == 0x0002D0, "Member 'UMyCharaMenu_LvSync_C::TotalPower' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSync_C, VIT) == 0x0002D8, "Member 'UMyCharaMenu_LvSync_C::VIT' has a wrong offset!");

}

