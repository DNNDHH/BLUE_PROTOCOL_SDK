#pragma once

 

// Package: WBP_ItemBoxScrollText_Destination

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_Destination.WBP_ItemBoxScrollText_Destination_C
// 0x0050 (0x02C8 - 0x0278)
class UWBP_ItemBoxScrollText_Destination_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_Over;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_87;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_222;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Over;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TypeSwitcher;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxScrollText_Destination_C">();
	}
	static class UWBP_ItemBoxScrollText_Destination_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxScrollText_Destination_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxScrollText_Destination_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxScrollText_Destination_C");
static_assert(sizeof(UWBP_ItemBoxScrollText_Destination_C) == 0x0002C8, "Wrong size on UWBP_ItemBoxScrollText_Destination_C");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, CanvasPanel_Over) == 0x000278, "Member 'UWBP_ItemBoxScrollText_Destination_C::CanvasPanel_Over' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image) == 0x000280, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image_1) == 0x000288, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image_2) == 0x000290, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image_87) == 0x000298, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image_87' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image_116) == 0x0002A0, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image_116' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Image_222) == 0x0002A8, "Member 'UWBP_ItemBoxScrollText_Destination_C::Image_222' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Txt_Comment) == 0x0002B0, "Member 'UWBP_ItemBoxScrollText_Destination_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, Txt_Over) == 0x0002B8, "Member 'UWBP_ItemBoxScrollText_Destination_C::Txt_Over' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxScrollText_Destination_C, TypeSwitcher) == 0x0002C0, "Member 'UWBP_ItemBoxScrollText_Destination_C::TypeSwitcher' has a wrong offset!");

}

