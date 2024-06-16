#pragma once

 

// Package: LibraryMenuBtn3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenuBtn3.LibraryMenuBtn3_C
// 0x0060 (0x02D8 - 0x0278)
class ULibraryMenuBtn3_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D64[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7D65[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_LibraryMenuBtn3(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetTextId(int32 TextId);
	void SetTextName(class FName Param_InTextName);
	void SetSoundID(ESystemSE SoundId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenuBtn3_C">();
	}
	static class ULibraryMenuBtn3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenuBtn3_C>();
	}
};
static_assert(alignof(ULibraryMenuBtn3_C) == 0x000008, "Wrong alignment on ULibraryMenuBtn3_C");
static_assert(sizeof(ULibraryMenuBtn3_C) == 0x0002D8, "Wrong size on ULibraryMenuBtn3_C");
static_assert(offsetof(ULibraryMenuBtn3_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenuBtn3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, Btn1) == 0x000280, "Member 'ULibraryMenuBtn3_C::Btn1' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, Txt1) == 0x000288, "Member 'ULibraryMenuBtn3_C::Txt1' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, InTextTable) == 0x000290, "Member 'ULibraryMenuBtn3_C::InTextTable' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, InTextID) == 0x000298, "Member 'ULibraryMenuBtn3_C::InTextID' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, EventOnClicked) == 0x0002A0, "Member 'ULibraryMenuBtn3_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, InTextName) == 0x0002B0, "Member 'ULibraryMenuBtn3_C::InTextName' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, Infontsize) == 0x0002B8, "Member 'ULibraryMenuBtn3_C::Infontsize' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, PressedSound) == 0x0002C0, "Member 'ULibraryMenuBtn3_C::PressedSound' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, HoveredSound) == 0x0002C8, "Member 'ULibraryMenuBtn3_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, PressedSoundId) == 0x0002D0, "Member 'ULibraryMenuBtn3_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(ULibraryMenuBtn3_C, HoveredSoundId) == 0x0002D1, "Member 'ULibraryMenuBtn3_C::HoveredSoundId' has a wrong offset!");

}

