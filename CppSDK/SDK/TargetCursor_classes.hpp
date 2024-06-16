#pragma once

 

// Package: TargetCursor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TargetCursor.TargetCursor_C
// 0x0030 (0x02D0 - 0x02A0)
class UTargetCursor_C final : public USBTargetCursorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ActiveCursor;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTargetableComponent*                 TargetableComponentBP;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   MarkerColorTbl;                                    // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_TargetCursor(int32 EntryPoint);
	void OnPlayLockOnSe();
	void Destruct();
	void Construct();
	void VisibleSettingChangeDelegate(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UpdatePosition();
	void IsTargetNear(bool* OutIsNear);
	void ColorChange();
	void GetNearRange(float* OutIsRange);
	void IsTargetInvincible(bool* OutIsInvincible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TargetCursor_C">();
	}
	static class UTargetCursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTargetCursor_C>();
	}
};
static_assert(alignof(UTargetCursor_C) == 0x000008, "Wrong alignment on UTargetCursor_C");
static_assert(sizeof(UTargetCursor_C) == 0x0002D0, "Wrong size on UTargetCursor_C");
static_assert(offsetof(UTargetCursor_C, UberGraphFrame) == 0x0002A0, "Member 'UTargetCursor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTargetCursor_C, ActiveCursor) == 0x0002A8, "Member 'UTargetCursor_C::ActiveCursor' has a wrong offset!");
static_assert(offsetof(UTargetCursor_C, PlayerCharacter) == 0x0002B0, "Member 'UTargetCursor_C::PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UTargetCursor_C, TargetableComponentBP) == 0x0002B8, "Member 'UTargetCursor_C::TargetableComponentBP' has a wrong offset!");
static_assert(offsetof(UTargetCursor_C, MarkerColorTbl) == 0x0002C0, "Member 'UTargetCursor_C::MarkerColorTbl' has a wrong offset!");

}

