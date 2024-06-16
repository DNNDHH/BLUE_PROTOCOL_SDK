#pragma once

 

// Package: UMG_PhotoModeControll_UploadListSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControll_UploadListSlot.UMG_PhotoModeControll_UploadListSlot_C
// 0x0010 (0x0290 - 0x0280)
class UUMG_PhotoModeControll_UploadListSlot_C final : public USBPhotoModeUploadListSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_722;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PhotoModeControll_UploadListSlot(int32 EntryPoint);
	void SetTexture(class UTexture2DDynamic* InTexture);
	void SetTexture_Bp(class UTexture2DDynamic* InTexture);
	void SetSlateBrush(class UObject* In_Brush_Image);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControll_UploadListSlot_C">();
	}
	static class UUMG_PhotoModeControll_UploadListSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControll_UploadListSlot_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControll_UploadListSlot_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControll_UploadListSlot_C");
static_assert(sizeof(UUMG_PhotoModeControll_UploadListSlot_C) == 0x000290, "Wrong size on UUMG_PhotoModeControll_UploadListSlot_C");
static_assert(offsetof(UUMG_PhotoModeControll_UploadListSlot_C, UberGraphFrame) == 0x000280, "Member 'UUMG_PhotoModeControll_UploadListSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadListSlot_C, Image_722) == 0x000288, "Member 'UUMG_PhotoModeControll_UploadListSlot_C::Image_722' has a wrong offset!");

}

