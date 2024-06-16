#pragma once

 

// Package: P019HUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "ECartridgeType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P019HUD.P019HUD_C
// 0x0078 (0x0300 - 0x0288)
class UP019HUD_C final : public USBClassHUDP019
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_35;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     OwnerPlayerCharacter;                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPCSmasherComponent*                  SmasherComp;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USmasherBoostCartridgeIcon_C*>   CartridgeImageList;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USmasherBoostCartridgeIcon_C*>   AdditionalCartridgeImageList;                      // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         RemainingCartridgeNum;                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowCartridgeNum;                                   // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CartridgeNum;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECartridgeType                                CartridgeType;                                     // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECartridgeType                                E_Cartridge_Type;                                  // 0x02FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P019HUD(int32 EntryPoint);
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindOnSaveEquippedPassiveArts();
	void BindOnSaveEquippedPassiveArts();
	void OnSaveEquippedPassiveArtsDelegate(const int32 RetCode);
	void OnInitCartridgeList();
	void OnInitAdditionalCartridgeList();
	void OnUpdateAdditionalCartridge();
	void OnSetMaxCartridge();
	void DebugPrintFunc();
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnSetEditMode(bool InIsEdit);
	void VisibleCartridge(int32 Param_CartridgeNum, bool PowerBulletActive, bool HealBulletActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P019HUD_C">();
	}
	static class UP019HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP019HUD_C>();
	}
};
static_assert(alignof(UP019HUD_C) == 0x000008, "Wrong alignment on UP019HUD_C");
static_assert(sizeof(UP019HUD_C) == 0x000300, "Wrong size on UP019HUD_C");
static_assert(offsetof(UP019HUD_C, UberGraphFrame) == 0x000288, "Member 'UP019HUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, AnimInOut) == 0x000290, "Member 'UP019HUD_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, CPRoot) == 0x000298, "Member 'UP019HUD_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, CPVisibleSetting) == 0x0002A0, "Member 'UP019HUD_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, HorizontalBox) == 0x0002A8, "Member 'UP019HUD_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, HorizontalBox_35) == 0x0002B0, "Member 'UP019HUD_C::HorizontalBox_35' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, WidgetSwitcher) == 0x0002B8, "Member 'UP019HUD_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, OwnerPlayerCharacter) == 0x0002C0, "Member 'UP019HUD_C::OwnerPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, SmasherComp) == 0x0002C8, "Member 'UP019HUD_C::SmasherComp' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, CartridgeImageList) == 0x0002D0, "Member 'UP019HUD_C::CartridgeImageList' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, AdditionalCartridgeImageList) == 0x0002E0, "Member 'UP019HUD_C::AdditionalCartridgeImageList' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, RemainingCartridgeNum) == 0x0002F0, "Member 'UP019HUD_C::RemainingCartridgeNum' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, NowCartridgeNum) == 0x0002F4, "Member 'UP019HUD_C::NowCartridgeNum' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, CartridgeNum) == 0x0002F8, "Member 'UP019HUD_C::CartridgeNum' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, CartridgeType) == 0x0002FC, "Member 'UP019HUD_C::CartridgeType' has a wrong offset!");
static_assert(offsetof(UP019HUD_C, E_Cartridge_Type) == 0x0002FD, "Member 'UP019HUD_C::E_Cartridge_Type' has a wrong offset!");

}

