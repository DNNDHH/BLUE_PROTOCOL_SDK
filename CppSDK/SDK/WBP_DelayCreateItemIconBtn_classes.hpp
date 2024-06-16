#pragma once

 

// Package: WBP_DelayCreateItemIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_DelayCreateItemIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         Widget;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CreateDelayTime;                                   // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsImagineSimpleTooltip;                            // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsToolTipEnable;                                   // 0x0295(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsRightClickAccept;                               // 0x0296(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_DelayCreateItemIconBtn(int32 EntryPoint);
	void Construct();
	void TryCreateWidget(class UItemIconBtn_C** Param_Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DelayCreateItemIconBtn_C">();
	}
	static class UWBP_DelayCreateItemIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DelayCreateItemIconBtn_C>();
	}
};
static_assert(alignof(UWBP_DelayCreateItemIconBtn_C) == 0x000008, "Wrong alignment on UWBP_DelayCreateItemIconBtn_C");
static_assert(sizeof(UWBP_DelayCreateItemIconBtn_C) == 0x000298, "Wrong size on UWBP_DelayCreateItemIconBtn_C");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UWBP_DelayCreateItemIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, CanvasPanel_0) == 0x000280, "Member 'UWBP_DelayCreateItemIconBtn_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, Widget) == 0x000288, "Member 'UWBP_DelayCreateItemIconBtn_C::Widget' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, CreateDelayTime) == 0x000290, "Member 'UWBP_DelayCreateItemIconBtn_C::CreateDelayTime' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, IsImagineSimpleTooltip) == 0x000294, "Member 'UWBP_DelayCreateItemIconBtn_C::IsImagineSimpleTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, IsToolTipEnable) == 0x000295, "Member 'UWBP_DelayCreateItemIconBtn_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UWBP_DelayCreateItemIconBtn_C, bIsRightClickAccept) == 0x000296, "Member 'UWBP_DelayCreateItemIconBtn_C::bIsRightClickAccept' has a wrong offset!");

}

