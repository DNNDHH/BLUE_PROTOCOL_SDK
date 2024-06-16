#pragma once

 

// Package: WBP_ItemResultItemGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C
// 0x00D0 (0x0348 - 0x0278)
class UWBP_ItemResultItemGroup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             IconGridPanel;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon01;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon02;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon03;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon04;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon05;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon06;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon07;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon08;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon09;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon10;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon11;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon12;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon13;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon14;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon15;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon16;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon17;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon18;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon19;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon20;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<EItemType>                             SelecttemType;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<int32>                                 SelectItemID;                                      // 0x0338(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_ItemResultItemGroup(int32 EntryPoint);
	void SetItem(TArray<struct FSBItemBoxResultItemData>& ItemList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemResultItemGroup_C">();
	}
	static class UWBP_ItemResultItemGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemResultItemGroup_C>();
	}
};
static_assert(alignof(UWBP_ItemResultItemGroup_C) == 0x000008, "Wrong alignment on UWBP_ItemResultItemGroup_C");
static_assert(sizeof(UWBP_ItemResultItemGroup_C) == 0x000348, "Wrong size on UWBP_ItemResultItemGroup_C");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemResultItemGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, IconGridPanel) == 0x000280, "Member 'UWBP_ItemResultItemGroup_C::IconGridPanel' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon01) == 0x000288, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon01' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon02) == 0x000290, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon02' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon03) == 0x000298, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon03' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon04) == 0x0002A0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon04' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon05) == 0x0002A8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon05' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon06) == 0x0002B0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon06' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon07) == 0x0002B8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon07' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon08) == 0x0002C0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon08' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon09) == 0x0002C8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon09' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon10) == 0x0002D0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon10' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon11) == 0x0002D8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon11' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon12) == 0x0002E0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon12' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon13) == 0x0002E8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon13' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon14) == 0x0002F0, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon14' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon15) == 0x0002F8, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon15' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon16) == 0x000300, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon16' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon17) == 0x000308, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon17' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon18) == 0x000310, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon18' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon19) == 0x000318, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon19' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, ItemIcon20) == 0x000320, "Member 'UWBP_ItemResultItemGroup_C::ItemIcon20' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, SelecttemType) == 0x000328, "Member 'UWBP_ItemResultItemGroup_C::SelecttemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemResultItemGroup_C, SelectItemID) == 0x000338, "Member 'UWBP_ItemResultItemGroup_C::SelectItemID' has a wrong offset!");

}

