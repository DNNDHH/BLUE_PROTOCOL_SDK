#pragma once

 

// Package: WBP_ItemBoxScrollText_OtherOne

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_OtherOne.WBP_ItemBoxScrollText_OtherOne_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_ItemBoxScrollText_OtherOne_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    Acquisitions;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Acquisitions1;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Acquisitions1_1;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Excess;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_219;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Excess;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemName;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTypeOtherOne(const class FText& Param_ItemName, bool bExcess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxScrollText_OtherOne_C">();
	}
	static class UWBP_ItemBoxScrollText_OtherOne_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxScrollText_OtherOne_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxScrollText_OtherOne_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxScrollText_OtherOne_C");
static_assert(sizeof(UWBP_ItemBoxScrollText_OtherOne_C) == 0x0002B8, "Wrong size on UWBP_ItemBoxScrollText_OtherOne_C");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Acquisitions) == 0x000278, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Acquisitions' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Acquisitions1) == 0x000280, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Acquisitions1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Acquisitions1_1) == 0x000288, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Acquisitions1_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Excess) == 0x000290, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Excess' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Image_1) == 0x000298, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Image_219) == 0x0002A0, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Image_219' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, Image_Excess) == 0x0002A8, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::Image_Excess' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_OtherOne_C, ItemName) == 0x0002B0, "Member 'UWBP_ItemBoxScrollText_OtherOne_C::ItemName' has a wrong offset!");

}

