#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Delete Mode
	 */
	struct UWBP_CharacterSelectListItem_C_SetDeleteMode_Params
	{
	public:
		bool                                                       bDeleteMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ResetMaskCanvas
	 */
	struct UWBP_CharacterSelectListItem_C_ResetMaskCanvas_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.PlayDelAnim
	 */
	struct UWBP_CharacterSelectListItem_C_PlayDelAnim_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Reset Move
	 */
	struct UWBP_CharacterSelectListItem_C_ResetMove_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Set Chara Image
	 */
	struct UWBP_CharacterSelectListItem_C_SetCharaImage_Params
	{
	public:
		class UTexture2DDynamic*                                   InTex;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Download Chara Image
	 */
	struct UWBP_CharacterSelectListItem_C_DownloadCharaImage_Params
	{
	public:
		int32_t                                                    CharaIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Move
	 */
	struct UWBP_CharacterSelectListItem_C_Move_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetMove
	 */
	struct UWBP_CharacterSelectListItem_C_SetMove_Params
	{
	public:
		int32_t                                                    InDir;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DownLoadCharacterImage_Event
	 */
	struct UWBP_CharacterSelectListItem_C_DownLoadCharacterImage_Event_Params
	{
	public:
		int32_t                                                    CharaIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.OnAnimationFinished
	 */
	struct UWBP_CharacterSelectListItem_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.DebugUpdeta
	 */
	struct UWBP_CharacterSelectListItem_C_DebugUpdeta_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Construct
	 */
	struct UWBP_CharacterSelectListItem_C_Construct_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.SetCharacterImageData
	 */
	struct UWBP_CharacterSelectListItem_C_SetCharacterImageData_Params
	{
	public:
		class ABP_CharacterSelectCaptureOne_C*                     CharacterSelectCaptureOne;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.Tick
	 */
	struct UWBP_CharacterSelectListItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.ExecuteUbergraph_WBP_CharacterSelectListItem
	 */
	struct UWBP_CharacterSelectListItem_C_ExecuteUbergraph_WBP_CharacterSelectListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharacterSelectListItem_C_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharacterSelectListItem.WBP_CharacterSelectListItem_C.EndAnim__DelegateSignature
	 */
	struct UWBP_CharacterSelectListItem_C_EndAnim__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
