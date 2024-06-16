#pragma once

 

// Package: WBP_CharacterSelectListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_CharacterSelectListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDel_out;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlackCover;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CharaCanvas;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharaImage;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharaImageBG1;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CharaMaskCanvas;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DebugText;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_95;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              Pos;                                               // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMove;                                            // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98CC[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Direction;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98CD[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EndAnim;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*               CharaImageMat;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndDelAnim;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MyIndex;                                           // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98CE[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CharacterSelectCaptureOne_C*        CharacterSelectCaptureOne;                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoadDelayTimer;                                    // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndAnim__DelegateSignature();
	void EndDelAnim__DelegateSignature();
	void ExecuteUbergraph_WBP_CharacterSelectListItem(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetCharacterImageData(class ABP_CharacterSelectCaptureOne_C* Param_CharacterSelectCaptureOne);
	void Construct();
	void DebugUpdeta();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void DownLoadCharacterImage_Event(int32 CharaIndex);
	void SetMove(int32 InDir);
	void Move();
	void Download_Chara_Image(int32 CharaIndex);
	void Set_Chara_Image(class UTexture2DDynamic* InTex);
	void Reset_Move();
	void PlayDelAnim();
	void ResetMaskCanvas();
	void Set_Delete_Mode(bool bDeleteMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterSelectListItem_C">();
	}
	static class UWBP_CharacterSelectListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterSelectListItem_C>();
	}
};
static_assert(alignof(UWBP_CharacterSelectListItem_C) == 0x000008, "Wrong alignment on UWBP_CharacterSelectListItem_C");
static_assert(sizeof(UWBP_CharacterSelectListItem_C) == 0x000338, "Wrong size on UWBP_CharacterSelectListItem_C");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CharacterSelectListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, AnimDel_out) == 0x000280, "Member 'UWBP_CharacterSelectListItem_C::AnimDel_out' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, BlackCover) == 0x000288, "Member 'UWBP_CharacterSelectListItem_C::BlackCover' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CanvasPanel_0) == 0x000290, "Member 'UWBP_CharacterSelectListItem_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharaCanvas) == 0x000298, "Member 'UWBP_CharacterSelectListItem_C::CharaCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharaImage) == 0x0002A0, "Member 'UWBP_CharacterSelectListItem_C::CharaImage' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharaImageBG1) == 0x0002A8, "Member 'UWBP_CharacterSelectListItem_C::CharaImageBG1' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharaMaskCanvas) == 0x0002B0, "Member 'UWBP_CharacterSelectListItem_C::CharaMaskCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CmnImageThrobber) == 0x0002B8, "Member 'UWBP_CharacterSelectListItem_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, DebugText) == 0x0002C0, "Member 'UWBP_CharacterSelectListItem_C::DebugText' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, TextBlock_95) == 0x0002C8, "Member 'UWBP_CharacterSelectListItem_C::TextBlock_95' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, Pos) == 0x0002D0, "Member 'UWBP_CharacterSelectListItem_C::Pos' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, IsMove) == 0x0002D8, "Member 'UWBP_CharacterSelectListItem_C::IsMove' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharacterId) == 0x0002E0, "Member 'UWBP_CharacterSelectListItem_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, Direction) == 0x0002F0, "Member 'UWBP_CharacterSelectListItem_C::Direction' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, EndAnim) == 0x0002F8, "Member 'UWBP_CharacterSelectListItem_C::EndAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharaImageMat) == 0x000308, "Member 'UWBP_CharacterSelectListItem_C::CharaImageMat' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, EndDelAnim) == 0x000310, "Member 'UWBP_CharacterSelectListItem_C::EndDelAnim' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, MyIndex) == 0x000320, "Member 'UWBP_CharacterSelectListItem_C::MyIndex' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, CharacterSelectCaptureOne) == 0x000328, "Member 'UWBP_CharacterSelectListItem_C::CharacterSelectCaptureOne' has a wrong offset!");
static_assert(offsetof(UWBP_CharacterSelectListItem_C, LoadDelayTimer) == 0x000330, "Member 'UWBP_CharacterSelectListItem_C::LoadDelayTimer' has a wrong offset!");

}

