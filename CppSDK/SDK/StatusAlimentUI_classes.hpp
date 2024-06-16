#pragma once

 

// Package: StatusAlimentUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusAlimentUI.StatusAlimentUI_C
// 0x0070 (0x0310 - 0x02A0)
class UStatusAlimentUI_C final : public USBStatusAlimentUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              TotalOffsetPosition;                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MoveSpeed;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldPos;                                          // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRemove;                                           // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E4F[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStatusUIRequestInfo                 RequestInfo;                                       // 0x02D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              CurLocation;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RemainTime;                                        // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatusAlimentUI(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Show(const struct FSBStatusUIRequestInfo& InRequestInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetText();
	void UpdateLocation(float InDeltaTime);
	void CalcBaseLocation(struct FVector2D* Location, bool* bResult);

	void IsInsideScreen(const struct FVector2D& InCheckPosition, bool* bInside) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusAlimentUI_C">();
	}
	static class UStatusAlimentUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusAlimentUI_C>();
	}
};
static_assert(alignof(UStatusAlimentUI_C) == 0x000008, "Wrong alignment on UStatusAlimentUI_C");
static_assert(sizeof(UStatusAlimentUI_C) == 0x000310, "Wrong size on UStatusAlimentUI_C");
static_assert(offsetof(UStatusAlimentUI_C, UberGraphFrame) == 0x0002A0, "Member 'UStatusAlimentUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, AnimInOut) == 0x0002A8, "Member 'UStatusAlimentUI_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, Text) == 0x0002B0, "Member 'UStatusAlimentUI_C::Text' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, TotalOffsetPosition) == 0x0002B8, "Member 'UStatusAlimentUI_C::TotalOffsetPosition' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, MoveSpeed) == 0x0002C0, "Member 'UStatusAlimentUI_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, WorldPos) == 0x0002C8, "Member 'UStatusAlimentUI_C::WorldPos' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, bRemove) == 0x0002D4, "Member 'UStatusAlimentUI_C::bRemove' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, RequestInfo) == 0x0002D8, "Member 'UStatusAlimentUI_C::RequestInfo' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, CurLocation) == 0x000300, "Member 'UStatusAlimentUI_C::CurLocation' has a wrong offset!");
static_assert(offsetof(UStatusAlimentUI_C, RemainTime) == 0x000308, "Member 'UStatusAlimentUI_C::RemainTime' has a wrong offset!");

}

