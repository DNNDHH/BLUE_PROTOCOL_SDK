#pragma once

 

// Package: WBP_ShopMenuDetailsExpiryDateTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_ShopMenuDetailsExpiryDateTime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Duration;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Header2;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForLimitTime;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDataAndVisibility(const class FString& EventTermId, int32 DurationMinutes, ESBRewardItemType RewardType);
	void SetExpiryDateTime(const struct FDateTime& ExpiryDateTime);
	void SetData(const class FString& EventTermId, int32 DurationMinutes, ESBRewardItemType RewardType);
	void SetEventTermId(const class FString& EventTermId);
	void SetDurationMinutes(int32 DurationMinutes);
	void SetMessage(ESBRewardItemType RewardType);
	void SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShopMenuDetailsExpiryDateTime_C">();
	}
	static class UWBP_ShopMenuDetailsExpiryDateTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShopMenuDetailsExpiryDateTime_C>();
	}
};
static_assert(alignof(UWBP_ShopMenuDetailsExpiryDateTime_C) == 0x000008, "Wrong alignment on UWBP_ShopMenuDetailsExpiryDateTime_C");
static_assert(sizeof(UWBP_ShopMenuDetailsExpiryDateTime_C) == 0x0002B0, "Wrong size on UWBP_ShopMenuDetailsExpiryDateTime_C");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, CanvasPanel_0) == 0x000280, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, SBDateTimeTextBlock_Duration) == 0x000288, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::SBDateTimeTextBlock_Duration' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, SBDateTimeTextBlock_Limit) == 0x000290, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::SBDateTimeTextBlock_Limit' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, SBRuntimeTextBlock_Header) == 0x000298, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::SBRuntimeTextBlock_Header' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, SBRuntimeTextBlock_Header2) == 0x0002A0, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::SBRuntimeTextBlock_Header2' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsExpiryDateTime_C, WidgetSwitcherForLimitTime) == 0x0002A8, "Member 'UWBP_ShopMenuDetailsExpiryDateTime_C::WidgetSwitcherForLimitTime' has a wrong offset!");

}

