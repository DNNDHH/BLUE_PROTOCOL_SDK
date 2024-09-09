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
	 * Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	 */
	struct UMediaCapture_UpdateTextureRenderTarget2D_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.StopCapture
	 */
	struct UMediaCapture_StopCapture_Params
	{
	public:
		bool                                                       bAllowPendingFrameToBeProcess;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.SetMediaOutput
	 */
	struct UMediaCapture_SetMediaOutput_Params
	{
	public:
		class UMediaOutput*                                        InMediaOutput;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.GetState
	 */
	struct UMediaCapture_GetState_Params
	{
	public:
		EMediaCaptureState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.GetDesiredSize
	 */
	struct UMediaCapture_GetDesiredSize_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
	 */
	struct UMediaCapture_GetDesiredPixelFormat_Params
	{
	public:
		EPixelFormat                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	 */
	struct UMediaCapture_CaptureTextureRenderTarget2D_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMediaCaptureOptions                                CaptureOptions;                                          // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	 */
	struct UMediaCapture_CaptureActiveSceneViewport_Params
	{
	public:
		struct FMediaCaptureOptions                                CaptureOptions;                                          // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaOutput.Validate
	 */
	struct UMediaOutput_Validate_Params
	{
	public:
		class FString                                              OutFailureReason;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MediaIOCore.MediaOutput.CreateMediaCapture
	 */
	struct UMediaOutput_CreateMediaCapture_Params
	{
	public:
		class UMediaCapture*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
