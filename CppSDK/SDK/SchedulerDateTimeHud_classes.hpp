#pragma once

 

// Package: SchedulerDateTimeHud

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SchedulerDateTimeHud.SchedulerDateTimeHud_C
// 0x00C0 (0x0338 - 0x0278)
class USchedulerDateTimeHud_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Now_Canvas;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_d;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_h;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_m;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_mi;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_s;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Now_y;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Vtl_Canvas;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_d;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_h;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_m;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_mi;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_s;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vtl_y_1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Vts_Canvas;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_d;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_h;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_m;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_mi;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_s;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Vts_y;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           EventTimerHandle;                                  // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SchedulerDateTimeHud(int32 EntryPoint);
	void Destruct();
	void UnbindDebugValueChanged();
	void TimerUpaateEvent();
	void OnDebugValueChanged(ESBDebugMenuType MenuType, class FName RowName);
	void BindDebugValueChanged();
	void Construct();
	void Show();
	void Close();
	void Update();
	void Update_NowDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp);
	void Update_VirtualDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp);
	void Update_VirtualDateStart(class USBPlayerVirtualDateTimeComponent* InDateTimeComp);
	void Update_DateTime();
	void IsShow(bool* Param_IsShow);
	void Update_OpenClose();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SchedulerDateTimeHud_C">();
	}
	static class USchedulerDateTimeHud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USchedulerDateTimeHud_C>();
	}
};
static_assert(alignof(USchedulerDateTimeHud_C) == 0x000008, "Wrong alignment on USchedulerDateTimeHud_C");
static_assert(sizeof(USchedulerDateTimeHud_C) == 0x000338, "Wrong size on USchedulerDateTimeHud_C");
static_assert(offsetof(USchedulerDateTimeHud_C, UberGraphFrame) == 0x000278, "Member 'USchedulerDateTimeHud_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, CanvasPanel_0) == 0x000280, "Member 'USchedulerDateTimeHud_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_Canvas) == 0x000288, "Member 'USchedulerDateTimeHud_C::Now_Canvas' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_d) == 0x000290, "Member 'USchedulerDateTimeHud_C::Now_d' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_h) == 0x000298, "Member 'USchedulerDateTimeHud_C::Now_h' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_m) == 0x0002A0, "Member 'USchedulerDateTimeHud_C::Now_m' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_mi) == 0x0002A8, "Member 'USchedulerDateTimeHud_C::Now_mi' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_s) == 0x0002B0, "Member 'USchedulerDateTimeHud_C::Now_s' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Now_y) == 0x0002B8, "Member 'USchedulerDateTimeHud_C::Now_y' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_Canvas) == 0x0002C0, "Member 'USchedulerDateTimeHud_C::Vtl_Canvas' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_d) == 0x0002C8, "Member 'USchedulerDateTimeHud_C::Vtl_d' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_h) == 0x0002D0, "Member 'USchedulerDateTimeHud_C::Vtl_h' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_m) == 0x0002D8, "Member 'USchedulerDateTimeHud_C::Vtl_m' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_mi) == 0x0002E0, "Member 'USchedulerDateTimeHud_C::Vtl_mi' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_s) == 0x0002E8, "Member 'USchedulerDateTimeHud_C::Vtl_s' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vtl_y_1) == 0x0002F0, "Member 'USchedulerDateTimeHud_C::Vtl_y_1' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_Canvas) == 0x0002F8, "Member 'USchedulerDateTimeHud_C::Vts_Canvas' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_d) == 0x000300, "Member 'USchedulerDateTimeHud_C::Vts_d' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_h) == 0x000308, "Member 'USchedulerDateTimeHud_C::Vts_h' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_m) == 0x000310, "Member 'USchedulerDateTimeHud_C::Vts_m' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_mi) == 0x000318, "Member 'USchedulerDateTimeHud_C::Vts_mi' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_s) == 0x000320, "Member 'USchedulerDateTimeHud_C::Vts_s' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, Vts_y) == 0x000328, "Member 'USchedulerDateTimeHud_C::Vts_y' has a wrong offset!");
static_assert(offsetof(USchedulerDateTimeHud_C, EventTimerHandle) == 0x000330, "Member 'USchedulerDateTimeHud_C::EventTimerHandle' has a wrong offset!");

}

