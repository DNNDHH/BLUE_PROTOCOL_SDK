#pragma once

 

// Package: Fang_expedition_StatusIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_StatusIcon.Fang_expedition_StatusIcon_C
// 0x0058 (0x02D0 - 0x0278)
class UFang_expedition_StatusIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmPlay;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmFinish1;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmFinish2;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 EffStar;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Finish;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Finish_Eff;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Play;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Play_Eff;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         IconIndex;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fang_expedition_StatusIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetTypeIndex(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_StatusIcon_C">();
	}
	static class UFang_expedition_StatusIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_StatusIcon_C>();
	}
};
static_assert(alignof(UFang_expedition_StatusIcon_C) == 0x000008, "Wrong alignment on UFang_expedition_StatusIcon_C");
static_assert(sizeof(UFang_expedition_StatusIcon_C) == 0x0002D0, "Wrong size on UFang_expedition_StatusIcon_C");
static_assert(offsetof(UFang_expedition_StatusIcon_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_StatusIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, AnmPlay) == 0x000280, "Member 'UFang_expedition_StatusIcon_C::AnmPlay' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, AnmFinish1) == 0x000288, "Member 'UFang_expedition_StatusIcon_C::AnmFinish1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, AnmFinish2) == 0x000290, "Member 'UFang_expedition_StatusIcon_C::AnmFinish2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, EffStar) == 0x000298, "Member 'UFang_expedition_StatusIcon_C::EffStar' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, Icon_Finish) == 0x0002A0, "Member 'UFang_expedition_StatusIcon_C::Icon_Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, Icon_Finish_Eff) == 0x0002A8, "Member 'UFang_expedition_StatusIcon_C::Icon_Finish_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, Icon_Play) == 0x0002B0, "Member 'UFang_expedition_StatusIcon_C::Icon_Play' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, Icon_Play_Eff) == 0x0002B8, "Member 'UFang_expedition_StatusIcon_C::Icon_Play_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, IconSwitcher) == 0x0002C0, "Member 'UFang_expedition_StatusIcon_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusIcon_C, IconIndex) == 0x0002C8, "Member 'UFang_expedition_StatusIcon_C::IconIndex' has a wrong offset!");

}

