#pragma once

 

// Package: HappyNappo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HappyNappo.HappyNappo_C
// 0x00D8 (0x0350 - 0x0278)
class UHappyNappo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOutComplete;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OutComplete;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InInteract;                                        // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OutInteract;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Bunbo;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Bunshi;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Complete;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CompleteMapName;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HappyNappoImage;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HappyNappoImage2;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ita;                                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ita2;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1_1;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2_1;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MapName;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NappoName;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBHappyNappo>                  NappoMasterData;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBHappyNappoComponent*                 HappyNappoComponent;                               // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AllNappoCount;                                     // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DiscoverdNappoCount;                               // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     NewVar_0;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             End;                                               // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_New;                                            // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void End__DelegateSignature();
	void ExecuteUbergraph_HappyNappo(int32 EntryPoint);
	void ReRequestSuccess();
	void Construct();
	void InteractAnimStart();
	void InOutAnimEnd();
	void ShowComplete();
	void CloseAndCheckCompleteEvent();
	void InteractHappyNappo(const int32 RetCode, const TArray<class FString>& NappoIds);
	void GetCurrentMapNappoMaster(TArray<struct FSBHappyNappo>* CurrentMapMasterData);
	void Init(const class FString& DiscoveredNappoId, int32 RetCode, TArray<class FString>& Nappo_ids, bool IsNew);
	void GetDiscoverdCurrentMapCount(TArray<class FString>& IDs, TArray<struct FSBHappyNappo>& CurrenMapMasterData, int32* DiscoverdCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HappyNappo_C">();
	}
	static class UHappyNappo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHappyNappo_C>();
	}
};
static_assert(alignof(UHappyNappo_C) == 0x000008, "Wrong alignment on UHappyNappo_C");
static_assert(sizeof(UHappyNappo_C) == 0x000350, "Wrong size on UHappyNappo_C");
static_assert(offsetof(UHappyNappo_C, UberGraphFrame) == 0x000278, "Member 'UHappyNappo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, InOutComplete) == 0x000280, "Member 'UHappyNappo_C::InOutComplete' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, OutComplete) == 0x000288, "Member 'UHappyNappo_C::OutComplete' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, InInteract) == 0x000290, "Member 'UHappyNappo_C::InInteract' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, OutInteract) == 0x000298, "Member 'UHappyNappo_C::OutInteract' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Bunbo) == 0x0002A0, "Member 'UHappyNappo_C::Bunbo' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Bunshi) == 0x0002A8, "Member 'UHappyNappo_C::Bunshi' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Complete) == 0x0002B0, "Member 'UHappyNappo_C::Complete' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, CompleteMapName) == 0x0002B8, "Member 'UHappyNappo_C::CompleteMapName' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, HappyNappoImage) == 0x0002C0, "Member 'UHappyNappo_C::HappyNappoImage' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, HappyNappoImage2) == 0x0002C8, "Member 'UHappyNappo_C::HappyNappoImage2' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Ita) == 0x0002D0, "Member 'UHappyNappo_C::Ita' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Ita2) == 0x0002D8, "Member 'UHappyNappo_C::Ita2' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Line1) == 0x0002E0, "Member 'UHappyNappo_C::Line1' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Line1_1) == 0x0002E8, "Member 'UHappyNappo_C::Line1_1' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Line2) == 0x0002F0, "Member 'UHappyNappo_C::Line2' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Line2_1) == 0x0002F8, "Member 'UHappyNappo_C::Line2_1' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, MapName) == 0x000300, "Member 'UHappyNappo_C::MapName' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, NappoName) == 0x000308, "Member 'UHappyNappo_C::NappoName' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, NappoMasterData) == 0x000310, "Member 'UHappyNappo_C::NappoMasterData' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, HappyNappoComponent) == 0x000320, "Member 'UHappyNappo_C::HappyNappoComponent' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, AllNappoCount) == 0x000328, "Member 'UHappyNappo_C::AllNappoCount' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, DiscoverdNappoCount) == 0x00032C, "Member 'UHappyNappo_C::DiscoverdNappoCount' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, NewVar_0) == 0x000330, "Member 'UHappyNappo_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, End) == 0x000338, "Member 'UHappyNappo_C::End' has a wrong offset!");
static_assert(offsetof(UHappyNappo_C, Is_New) == 0x000348, "Member 'UHappyNappo_C::Is_New' has a wrong offset!");

}

