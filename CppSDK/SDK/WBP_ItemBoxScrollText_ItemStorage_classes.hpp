#pragma once

 

// Package: WBP_ItemBoxScrollText_ItemStorage

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C
// 0x0070 (0x02E8 - 0x0278)
class UWBP_ItemBoxScrollText_ItemStorage_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    Acquisitions;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Acquisitions1;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Acquisitions2;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Acquisitions_Form;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_219;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_543;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Excess;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Excess_1;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemName;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Possessions;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PossessionsMax;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PossessionsNow;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Over;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Excess;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItemSingle(const class FText& Param_ItemName, int32 NowNum, int32 MaxNum, int32 Expectation, bool bCanNotLost);
	void SetItemRange(const class FText& Param_ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNamMin, int32 ExpectationNamMax, bool bCanNotLost);
	void GetNumColor(int32 Num, int32 Max, struct FSlateColor* SlateColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxScrollText_ItemStorage_C">();
	}
	static class UWBP_ItemBoxScrollText_ItemStorage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxScrollText_ItemStorage_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxScrollText_ItemStorage_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxScrollText_ItemStorage_C");
static_assert(sizeof(UWBP_ItemBoxScrollText_ItemStorage_C) == 0x0002E8, "Wrong size on UWBP_ItemBoxScrollText_ItemStorage_C");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Acquisitions) == 0x000278, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Acquisitions' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Acquisitions1) == 0x000280, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Acquisitions1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Acquisitions2) == 0x000288, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Acquisitions2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Acquisitions_Form) == 0x000290, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Acquisitions_Form' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Image_219) == 0x000298, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Image_219' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Image_543) == 0x0002A0, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Image_543' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Image_Excess) == 0x0002A8, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Image_Excess' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Image_Excess_1) == 0x0002B0, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Image_Excess_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, ItemName) == 0x0002B8, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Possessions) == 0x0002C0, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Possessions' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, PossessionsMax) == 0x0002C8, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::PossessionsMax' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, PossessionsNow) == 0x0002D0, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::PossessionsNow' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, Txt_Over) == 0x0002D8, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::Txt_Over' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_ItemStorage_C, WidgetSwitcher_Excess) == 0x0002E0, "Member 'UWBP_ItemBoxScrollText_ItemStorage_C::WidgetSwitcher_Excess' has a wrong offset!");

}

