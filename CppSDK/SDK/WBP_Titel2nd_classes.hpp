#pragma once

 

// Package: WBP_Titel2nd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Titel2nd.WBP_Titel2nd_C
// 0x0068 (0x02E0 - 0x0278)
class UWBP_Titel2nd_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimArrowLoop;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           BgGrp;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CharaLayer;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn21_C*                            CmnBtn21;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_44;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextBlock*                           SbTxtProjectVersion;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGameStart;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bStart;                                            // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E01[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EffectActor;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTitleMenuCharaLayer*                 CharaLayerWidget;                                  // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnGameStart__DelegateSignature();
	void ExecuteUbergraph_WBP_Titel2nd(int32 EntryPoint);
	void LoadEffectActor();
	void Init();
	void LoadCharaLayer();
	void BndEvt__WBP_Titel2nd_CmnBtn21_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void OnLoaded_6D8E14BA4C7566A616900EACB09E0D02(TSubclassOf<class UObject> Loaded);
	void OnLoaded_AC83F13446C7CD3D474956826D46E533(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Titel2nd_C">();
	}
	static class UWBP_Titel2nd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Titel2nd_C>();
	}
};
static_assert(alignof(UWBP_Titel2nd_C) == 0x000008, "Wrong alignment on UWBP_Titel2nd_C");
static_assert(sizeof(UWBP_Titel2nd_C) == 0x0002E0, "Wrong size on UWBP_Titel2nd_C");
static_assert(offsetof(UWBP_Titel2nd_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Titel2nd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, AnimArrowLoop) == 0x000280, "Member 'UWBP_Titel2nd_C::AnimArrowLoop' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, BgGrp) == 0x000288, "Member 'UWBP_Titel2nd_C::BgGrp' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, CharaLayer) == 0x000290, "Member 'UWBP_Titel2nd_C::CharaLayer' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, CmnBtn21) == 0x000298, "Member 'UWBP_Titel2nd_C::CmnBtn21' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, Image_3) == 0x0002A0, "Member 'UWBP_Titel2nd_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, Image_44) == 0x0002A8, "Member 'UWBP_Titel2nd_C::Image_44' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, SbTxtProjectVersion) == 0x0002B0, "Member 'UWBP_Titel2nd_C::SbTxtProjectVersion' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, OnGameStart) == 0x0002B8, "Member 'UWBP_Titel2nd_C::OnGameStart' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, bStart) == 0x0002C8, "Member 'UWBP_Titel2nd_C::bStart' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, EffectActor) == 0x0002D0, "Member 'UWBP_Titel2nd_C::EffectActor' has a wrong offset!");
static_assert(offsetof(UWBP_Titel2nd_C, CharaLayerWidget) == 0x0002D8, "Member 'UWBP_Titel2nd_C::CharaLayerWidget' has a wrong offset!");

}

