#pragma once

 

// Package: WBP_ShopMenuDetailsNameParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_ShopMenuDetailsNameParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtType;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bHideType;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_ShopMenuDetailsNameParts(int32 EntryPoint);
	void SetStackB(ESBRewardItemType RewardType, int32 ID, const class FString& UniqueId);
	void SetNameAndType2(ESBRewardItemType RewardType, int32 ID, int32 Amount, int32 AmountMin);
	void PreConstruct(bool IsDesignTime);
	void SetNameAndType(ESBRewardItemType RewardType, int32 ID);
	void SetText(const class FText& InText);
	void SetBonus(bool bBonus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShopMenuDetailsNameParts_C">();
	}
	static class UWBP_ShopMenuDetailsNameParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShopMenuDetailsNameParts_C>();
	}
};
static_assert(alignof(UWBP_ShopMenuDetailsNameParts_C) == 0x000008, "Wrong alignment on UWBP_ShopMenuDetailsNameParts_C");
static_assert(sizeof(UWBP_ShopMenuDetailsNameParts_C) == 0x0002A8, "Wrong size on UWBP_ShopMenuDetailsNameParts_C");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ShopMenuDetailsNameParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, CmnIcon_KeyItem) == 0x000280, "Member 'UWBP_ShopMenuDetailsNameParts_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, TxtName) == 0x000288, "Member 'UWBP_ShopMenuDetailsNameParts_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, TxtType) == 0x000290, "Member 'UWBP_ShopMenuDetailsNameParts_C::TxtType' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, WBP_StackB_M) == 0x000298, "Member 'UWBP_ShopMenuDetailsNameParts_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsNameParts_C, bHideType) == 0x0002A0, "Member 'UWBP_ShopMenuDetailsNameParts_C::bHideType' has a wrong offset!");

}

