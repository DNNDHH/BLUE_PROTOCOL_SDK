#pragma once

 

// Package: WBP_CharaSelect_BustUpImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaSelect_BustUpImage.WBP_CharaSelect_BustUpImage_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_CharaSelect_BustUpImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFx;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BustUp;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class UTexture2DDynamic*> ImageCache;                                        // 0x0298(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_CharacterSelectCaptureBustUp_C*     CharacterSelectCapture;                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoadDelayTimer;                                    // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CharaSelect_BustUpImage(int32 EntryPoint);
	void PlayFxAnim();
	void SetImage();
	void Update(float DeltaTime);
	void SetTarget(class ABP_CharacterSelectCaptureBustUp_C* CharacterSelectCaptureBustUp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaSelect_BustUpImage_C">();
	}
	static class UWBP_CharaSelect_BustUpImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaSelect_BustUpImage_C>();
	}
};
static_assert(alignof(UWBP_CharaSelect_BustUpImage_C) == 0x000008, "Wrong alignment on UWBP_CharaSelect_BustUpImage_C");
static_assert(sizeof(UWBP_CharaSelect_BustUpImage_C) == 0x0002F8, "Wrong size on UWBP_CharaSelect_BustUpImage_C");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharaSelect_BustUpImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, AnimFx) == 0x000280, "Member 'UWBP_CharaSelect_BustUpImage_C::AnimFx' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, CmnImageThrobber) == 0x000288, "Member 'UWBP_CharaSelect_BustUpImage_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, Image_BustUp) == 0x000290, "Member 'UWBP_CharaSelect_BustUpImage_C::Image_BustUp' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, ImageCache) == 0x000298, "Member 'UWBP_CharaSelect_BustUpImage_C::ImageCache' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, CharacterSelectCapture) == 0x0002E8, "Member 'UWBP_CharaSelect_BustUpImage_C::CharacterSelectCapture' has a wrong offset!");
static_assert(offsetof(UWBP_CharaSelect_BustUpImage_C, LoadDelayTimer) == 0x0002F0, "Member 'UWBP_CharaSelect_BustUpImage_C::LoadDelayTimer' has a wrong offset!");

}

