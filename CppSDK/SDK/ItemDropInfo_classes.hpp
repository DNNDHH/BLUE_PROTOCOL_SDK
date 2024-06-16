#pragma once

 

// Package: ItemDropInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDropInfo.ItemDropInfo_C
// 0x0068 (0x02E0 - 0x0278)
class UItemDropInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Target;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_92;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WishlistInformationIcon;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    Handle;                                            // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ItemName;                                          // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EItemObtainRouteType                          RouteType;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DDD[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDateTime                              DateTime;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 TermId;                                            // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemDropInfo(int32 EntryPoint);
	void Destruct();
	void Set_ItemId(int32 Param_ItemId);
	void Construct();
	void GetTexts(const struct FItemMasterData& ItemMasterData, class FText* Detail1);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDropInfo_C">();
	}
	static class UItemDropInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDropInfo_C>();
	}
};
static_assert(alignof(UItemDropInfo_C) == 0x000008, "Wrong alignment on UItemDropInfo_C");
static_assert(sizeof(UItemDropInfo_C) == 0x0002E0, "Wrong size on UItemDropInfo_C");
static_assert(offsetof(UItemDropInfo_C, UberGraphFrame) == 0x000278, "Member 'UItemDropInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, CanvasPanel_0) == 0x000280, "Member 'UItemDropInfo_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, Cvs_Target) == 0x000288, "Member 'UItemDropInfo_C::Cvs_Target' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, Image_92) == 0x000290, "Member 'UItemDropInfo_C::Image_92' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, WishlistInformationIcon) == 0x000298, "Member 'UItemDropInfo_C::WishlistInformationIcon' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, Handle) == 0x0002A0, "Member 'UItemDropInfo_C::Handle' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, ItemName) == 0x0002A8, "Member 'UItemDropInfo_C::ItemName' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, RouteType) == 0x0002C0, "Member 'UItemDropInfo_C::RouteType' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, ItemId) == 0x0002C4, "Member 'UItemDropInfo_C::ItemId' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, DateTime) == 0x0002C8, "Member 'UItemDropInfo_C::DateTime' has a wrong offset!");
static_assert(offsetof(UItemDropInfo_C, TermId) == 0x0002D0, "Member 'UItemDropInfo_C::TermId' has a wrong offset!");

}

