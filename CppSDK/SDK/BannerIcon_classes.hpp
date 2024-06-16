#pragma once

 

// Package: BannerIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BannerIcon.BannerIcon_C
// 0x0038 (0x02B0 - 0x0278)
class UBannerIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Banner;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              SetBannerTexture;                                  // 0x0288(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BannerIcon(int32 EntryPoint);
	void Construct();
	void BannerLoadStart(TSoftObjectPtr<class UTexture2D> NowLoadTexture);
	void OnLoaded_4B7E5655474594DCF8A223A5CD904BF3(class UObject* Loaded);
	void SetBanner(class FName BannerName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BannerIcon_C">();
	}
	static class UBannerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBannerIcon_C>();
	}
};
static_assert(alignof(UBannerIcon_C) == 0x000008, "Wrong alignment on UBannerIcon_C");
static_assert(sizeof(UBannerIcon_C) == 0x0002B0, "Wrong size on UBannerIcon_C");
static_assert(offsetof(UBannerIcon_C, UberGraphFrame) == 0x000278, "Member 'UBannerIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBannerIcon_C, Image_Banner) == 0x000280, "Member 'UBannerIcon_C::Image_Banner' has a wrong offset!");
static_assert(offsetof(UBannerIcon_C, SetBannerTexture) == 0x000288, "Member 'UBannerIcon_C::SetBannerTexture' has a wrong offset!");

}

