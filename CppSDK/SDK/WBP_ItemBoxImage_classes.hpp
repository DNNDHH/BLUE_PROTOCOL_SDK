#pragma once

 

// Package: WBP_ItemBoxImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxImage.WBP_ItemBoxImage_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_ItemBoxImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_70;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ItemBoxImage(int32 EntryPoint);
	void InitIconImage(int32 InItemID, EItemType InItemType);
	void IconLoadStart(TSoftObjectPtr<class UTexture2D> NowLoadTexture);
	void IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference);
	void OnLoaded_753F2A8F4CEFA9688FDB97A44A552509(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxImage_C">();
	}
	static class UWBP_ItemBoxImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxImage_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxImage_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxImage_C");
static_assert(sizeof(UWBP_ItemBoxImage_C) == 0x000288, "Wrong size on UWBP_ItemBoxImage_C");
static_assert(offsetof(UWBP_ItemBoxImage_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ItemBoxImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxImage_C, Image_70) == 0x000280, "Member 'UWBP_ItemBoxImage_C::Image_70' has a wrong offset!");

}

