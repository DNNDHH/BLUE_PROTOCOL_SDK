#pragma once

 

// Package: BP_ImagineForCapture_Studio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CaptureStudioBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ImagineForCapture_Studio.BP_ImagineForCapture_Studio_C
// 0x0020 (0x03C0 - 0x03A0)
class ABP_ImagineForCapture_Studio_C final : public ABP_CaptureStudioBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ImagineForCapture_Studio_C;      // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   BP_ImagineForCapture;                              // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnImagineLoadedDelegete;                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnImagineLoadedDelegete__DelegateSignature();
	void ExecuteUbergraph_BP_ImagineForCapture_Studio(int32 EntryPoint);
	void OnSetImagineData_Event_0(bool bResult);
	void LoadImagineAsset(int32 InImagineItemId);
	void ResetImagine();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ImagineForCapture_Studio_C">();
	}
	static class ABP_ImagineForCapture_Studio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ImagineForCapture_Studio_C>();
	}
};
static_assert(alignof(ABP_ImagineForCapture_Studio_C) == 0x000010, "Wrong alignment on ABP_ImagineForCapture_Studio_C");
static_assert(sizeof(ABP_ImagineForCapture_Studio_C) == 0x0003C0, "Wrong size on ABP_ImagineForCapture_Studio_C");
static_assert(offsetof(ABP_ImagineForCapture_Studio_C, UberGraphFrame_BP_ImagineForCapture_Studio_C) == 0x0003A0, "Member 'ABP_ImagineForCapture_Studio_C::UberGraphFrame_BP_ImagineForCapture_Studio_C' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_Studio_C, BP_ImagineForCapture) == 0x0003A8, "Member 'ABP_ImagineForCapture_Studio_C::BP_ImagineForCapture' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_Studio_C, OnImagineLoadedDelegete) == 0x0003B0, "Member 'ABP_ImagineForCapture_Studio_C::OnImagineLoadedDelegete' has a wrong offset!");

}

